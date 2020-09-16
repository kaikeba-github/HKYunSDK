//
//  KKBMyCouponListRequest.h
//  KaiKeBa
//
//  Created by Duane on 2019/11/21.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"
#import "KKBMyCouponListModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBMyCouponListRequest : KKBLearningCenterRequest

@property (nonatomic, assign, readonly) KKBCouponStatus status;

- (instancetype)initWithStatus:(KKBCouponStatus)status page:(NSInteger)page;

@end

NS_ASSUME_NONNULL_END
