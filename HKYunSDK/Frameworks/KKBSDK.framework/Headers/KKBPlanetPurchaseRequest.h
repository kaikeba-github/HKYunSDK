//
//  KKBPlanetPurchaseRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/11/5.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBPlanetPurchaseRequest : KKBLearningCenterRequest

- (instancetype)initWithOrderNo:(NSString *)orderNo WithPayChannel:(NSInteger)payChannel;

@end

NS_ASSUME_NONNULL_END
