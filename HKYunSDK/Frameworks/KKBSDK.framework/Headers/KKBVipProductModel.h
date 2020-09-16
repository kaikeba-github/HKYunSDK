//
//  KKBVipProductModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/14.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@class KKBSkuModel;
@interface  KKBVipProductModel : KKBBaseModel

@property (nonatomic, strong)NSString *spuName; //商品名称
@property (nonatomic, strong)NSString *thumbnail; //图标
@property (nonatomic, assign)NSUInteger spuPrice;//商品价格
@property (nonatomic, strong)NSString *productDesp; //商品描述
@property (nonatomic, strong)NSArray<KKBSkuModel *> *skuList;


@end

NS_ASSUME_NONNULL_END
