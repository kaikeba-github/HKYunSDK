//
//  KKBCourseContractStateRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/27.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBCourseContractStateRequest : KKBLearningCenterRequest


/*
 ** 当前课程电子签章状态信息 **
 */

- (instancetype)initWithCourseId:(uintID)courseId;

@end

NS_ASSUME_NONNULL_END
