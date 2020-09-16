//
//  KKBCoursePayStatusRequest.h
//  KaiKeBa
//
//  Created by Duane on 2019/8/21.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBCoursePayStatusRequest : KKBLearningCenterRequest

- (instancetype)initWithProductCode:(NSString *)productCode courseId:(intID)courseId;

@end

NS_ASSUME_NONNULL_END
