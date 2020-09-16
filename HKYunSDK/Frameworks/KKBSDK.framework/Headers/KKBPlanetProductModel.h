//
//  KKBPlanetProductModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/11/2.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBPlanetProductModel : KKBBaseModel
@property (nonatomic, strong) NSString *skuId;
@property (nonatomic, strong) NSString *skuName;
@property (nonatomic, strong) NSString *contentImg; //星球详情介绍图片
@property (nonatomic, assign) NSUInteger contentImgHeight;   //
@property (nonatomic, assign) NSUInteger  contentImgWidth;
@property (nonatomic, strong) NSString *desc;
@property (nonatomic, assign) NSInteger spuPrice; //原价
@property (nonatomic, assign) NSInteger skuPrice; //价格
@property (nonatomic, strong) NSString *thumbnail;
@property (nonatomic, assign) NSInteger status;  //商品状态 0为没有商品信息 1 有商品信息
@property (nonatomic, assign) NSInteger orderStatus; // orderStatus为0 未购买

@end

NS_ASSUME_NONNULL_END
