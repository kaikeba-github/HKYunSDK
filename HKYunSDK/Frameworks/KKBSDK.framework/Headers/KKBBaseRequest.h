//
//  KKBBaseRequest.h
//  KaiKeBa
//
//  Created by Duane on 2019/4/12.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <YTKNetwork/YTKRequest.h>
#import "KKBResponseModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KKBRequestStatus) {
    KKBRequestStatus_Ok = 1, // 成功
    KKBRequestStatus_Empty = 0, // 成功，数据为空
    
    KKBRequestStatus_Error = -1, // 通用错误码
    
    KKBRequestStatus_TokenRefresh = -200, // token请求数据权限已到期，此时可以请求刷新token接口换取新的token
    KKBRequestStatus_TokenNull = -201, // token为空，请重新登录
    KKBRequestStatus_TokenInvalid = -202, // token无效，请重新登录
    KKBRequestStatus_TokenExpired = -203, // token刷新过期，请重新登录
    
    KKBRequestStatus_UNDEFINED = -500, //
};

@class KKBBaseRequest;

typedef void(^KKBRequestBlock)(__kindof KKBBaseRequest *request);

@interface KKBBaseRequest : YTKRequest

@property (nonatomic, strong) NSDictionary *params;

@property (nonatomic, strong, readonly) KKBResponseModel *responseModel;

@property (nonatomic, strong, readonly) NSString *errorMessage;
@property (nonatomic, assign, readonly) BOOL success;

@property (nonatomic, assign) BOOL mockEnable;
@property (nonatomic, readonly) NSString *mockPath;

- (void)startWithSuccess:(KKBRequestBlock)success failure:(KKBRequestBlock)failure;
- (void)startWithCompletionBlockWithSuccess:(nullable YTKRequestCompletionBlock)success failure:(nullable YTKRequestCompletionBlock)failure __attribute__((unavailable("call startWithSuccess:failure: instead")));

- (id)processResult:(id)resultData;

@end

@interface NSError (KKBRequestMessage)

- (NSString *)requestErrorMessage;

@end

NS_ASSUME_NONNULL_END
