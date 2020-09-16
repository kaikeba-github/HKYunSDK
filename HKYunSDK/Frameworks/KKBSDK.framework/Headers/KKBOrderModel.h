//
//  KKBOrderModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/8/19.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@class KKBPayChannelModel;
@interface KKBOrderModel : KKBBaseModel

@property (nonatomic, strong)NSString *order_no;
@property (nonatomic, assign)CGFloat total_amount;
@property (nonatomic, strong)NSString *product_code;
@property (nonatomic, strong)NSString *product_name;
@property (nonatomic, strong)NSArray<KKBPayChannelModel *> *pay_channels; //渠道编号列表
@property (nonatomic, strong)NSString *receipt_base64; //iAP凭证
@property (nonatomic, strong)NSString *out_product_code;//苹果产品价格阶梯ID Tier

@end

NS_ASSUME_NONNULL_END
