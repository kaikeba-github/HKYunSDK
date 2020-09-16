//
//  KKBCoursePurchaseRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/8/19.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@class KKBPayChannelModel;
@interface KKBCoursePurchaseRequest : KKBLearningCenterRequest

- (instancetype)initWithOrderNo:(NSString *)orderNo withPayChannel:(KKBPayChannelModel *)payChannel;

@end

NS_ASSUME_NONNULL_END
