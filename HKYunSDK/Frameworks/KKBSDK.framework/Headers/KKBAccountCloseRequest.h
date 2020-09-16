//
//  KKBAccountCloseRequest.h
//  KKBSDK
//
//  Created by 西门桃桃 on 2020/8/5.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBAccountCloseCodeRequest : KKBLearningCenterRequest

@end

@interface KKBAccountCloseRequest : KKBLearningCenterRequest

- (instancetype)initWithVerifyCode:(NSString *)verifyCode;

@end

NS_ASSUME_NONNULL_END
