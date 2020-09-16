//
//  KKBCreateProductOrderRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/14.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBCreateProductOrderRequest : KKBLearningCenterRequest

- (instancetype)initWithProductCode:(NSString *)productCode;

@end

NS_ASSUME_NONNULL_END
