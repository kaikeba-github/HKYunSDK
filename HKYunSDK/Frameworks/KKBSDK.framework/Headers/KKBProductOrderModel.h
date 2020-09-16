//
//  KKBProductOrderModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/14.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"
#import "KKBProductPayChannelModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBProductOrderModel : KKBBaseModel

@property (nonatomic, strong)NSString *order_no;
@property (nonatomic, assign)NSInteger total_amount;
@property (nonatomic, assign)NSInteger quantity;
@property (nonatomic, strong)NSArray<KKBProductPayChannelModel *> *pay_channels; //渠道编号列表

@end

NS_ASSUME_NONNULL_END
