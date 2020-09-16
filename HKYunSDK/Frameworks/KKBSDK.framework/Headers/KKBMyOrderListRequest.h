//
//  KKBMyOrderListRequest.h
//  KaiKeBa
//
//  Created by Duane on 2019/11/5.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"
#import "KKBMyOrderListModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBMyOrderListRequest : KKBLearningCenterRequest

- (instancetype)initWithPage:(NSInteger)page;

@end

NS_ASSUME_NONNULL_END
