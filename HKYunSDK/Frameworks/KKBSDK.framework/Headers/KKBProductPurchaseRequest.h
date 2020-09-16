//
//  KKBProductPurchaseRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/14.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBProductPurchaseRequest : KKBLearningCenterRequest

- (instancetype)initWithOrderNo:(NSString *)orderNo WithPayChannel:(uintID)payChannel;

@end

NS_ASSUME_NONNULL_END
