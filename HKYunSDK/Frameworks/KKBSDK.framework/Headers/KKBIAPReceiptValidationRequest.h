//
//  KKBIAPReceiptValidationRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/8/19.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBIAPReceiptValidationRequest : KKBLearningCenterRequest

- (instancetype)initWithOrderNo:(NSString *)orderNo withReceiptData:(NSString *)receiptData;

@end

NS_ASSUME_NONNULL_END
