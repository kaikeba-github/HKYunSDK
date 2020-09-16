//
//  KKBCreateCourseOrderRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/8/19.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBCreateCourseOrderRequest : KKBLearningCenterRequest

//购买课程订单创建
- (instancetype)initWithProductCode:(NSString *)productCode;

//充值订单创建
- (instancetype)initWithOutProductCode:(NSString *)outProductCode;


@end

NS_ASSUME_NONNULL_END
