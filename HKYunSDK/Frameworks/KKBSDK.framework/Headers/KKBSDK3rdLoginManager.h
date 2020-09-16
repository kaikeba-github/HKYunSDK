//
//  KKBSDK3rdLoginManager.h
//  KKBSDK
//
//  Created by Duane on 2020/9/9.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKB3rdAuthModel : NSObject

@property (nonatomic, copy) NSString  *openid;
@property (nonatomic, copy) NSString  *accessToken;
@property (nonatomic, copy) NSDate    *expiration;

@property (nonatomic, strong)NSDictionary* extDic;//每个平台特有的字段有可能会加在此处，有可能为nil

@property (nonatomic, copy) NSString  *name;
@property (nonatomic, copy) NSString  *iconurl;
@property (nonatomic, copy) NSString  *gender;

@end

typedef void(^KKB3rdAuthBlock)(KKB3rdAuthModel * _Nullable authModel, NSError * _Nullable error);
typedef void(^KKB3rdLoginBlock)(KKB3rdAuthBlock _Nullable authBlock);

@interface KKBSDK3rdLoginManager : NSObject

DEFINE_SINGLETON_FOR_H(KKBSDK3rdLoginManager)

@property (nonatomic, strong, readonly) NSString *weixinAppId;
@property (nonatomic, strong, readonly) NSString *weixinAppSecret;
@property (nonatomic, strong, readonly) NSString *weixinUniversalLink;

@property (nonatomic, copy) KKB3rdLoginBlock weixinLoginBlock;

- (void)configWexin:(NSString *)appId appSecret:(NSString *)appSecret universalLink:(NSString *)universalLink;

@end

NS_ASSUME_NONNULL_END
