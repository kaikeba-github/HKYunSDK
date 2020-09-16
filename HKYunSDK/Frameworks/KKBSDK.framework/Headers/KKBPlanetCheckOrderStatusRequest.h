//
//  KKBCheckOrderStatusRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/11/7.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBPlanetCheckOrderStatusRequest : KKBLearningCenterRequest

- (instancetype)initWithOrderNo:(NSString *)orderNo;

@end

NS_ASSUME_NONNULL_END
