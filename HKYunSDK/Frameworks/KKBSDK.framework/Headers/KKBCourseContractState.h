//
//  KKBCourseContractState.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/27.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KKBCourseContractStatus) {
    KKBCourseContractStatus_None = 0, // 0 不需要签订合同
    KKBCourseContractStatus_NeedsSign = 1, // 1 需要签订合同 未签订
    KKBCourseContractStatus_Signed = 2, // 2 需要签订合同已签订
};

@interface KKBCourseContractState : KKBBaseModel
@property (nonatomic, assign)KKBCourseContractStatus  result; //合同状态：
@property (nonatomic, strong)NSString *uri; //链接地址

@end

NS_ASSUME_NONNULL_END
