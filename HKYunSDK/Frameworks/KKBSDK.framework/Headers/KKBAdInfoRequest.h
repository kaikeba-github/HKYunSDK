//
//  KKBAdInfoRequest.h
//  KKBSDK
//
//  Created by zddMac on 2020/8/10.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KKBAdInfoType) {
    KKBAdInfoType_Pop=4, //pop广告
    KKBAdInfoType_launghScreen=14,
    
};

@interface KKBAdInfoRequest : KKBLearningCenterRequest

- (instancetype)initWithContentType:(KKBAdInfoType)adType;

@end

NS_ASSUME_NONNULL_END
