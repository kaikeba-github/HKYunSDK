//
//  KKBPlanetPayOrderStatusModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/11/7.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBPlanetPayOrderStatusModel : KKBBaseModel
@property (nonatomic, strong)NSString *orderNo;
@property (nonatomic, assign)NSInteger status; //订单状态 1成功 0失败


@end

NS_ASSUME_NONNULL_END
