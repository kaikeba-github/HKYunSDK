//
//  KKBCourseChapterSpuModel.h
//  KaiKeBa
//
//  Created by zddMac on 2020/3/3.
//  Copyright © 2020 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBCourseChapterSpuModel : KKBBaseModel

@property (nonatomic, strong)NSString *detailUrl; //商品详情（无支付信息）
@property (nonatomic, strong)NSString *productCode;
@property (nonatomic, assign)CGFloat  productPrice;
@property (nonatomic, strong)NSString *productName;
@property (nonatomic, assign)NSInteger payStatus;   //支付状态，是否购买 1=已购买 0=未购买

@end

NS_ASSUME_NONNULL_END
