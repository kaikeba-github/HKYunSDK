//
//  KKBSkuModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/14.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@class KKBProductPayChannelModel;
@interface KKBSkuModel : KKBBaseModel
@property (nonatomic, strong)NSString *skuId;
@property (nonatomic, assign)NSUInteger price;
@property (nonatomic, strong)NSString *name;
@property (nonatomic, strong)NSArray<KKBProductPayChannelModel *> *payChannel; //渠道编号列表

@end

NS_ASSUME_NONNULL_END
