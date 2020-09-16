//
//  KKBMyCouponListModel.h
//  KaiKeBa
//
//  Created by Duane on 2019/11/21.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KKBCouponStatus) {
    KKBCouponStatus_Normal = 0, // 0：未使用
    KKBCouponStatus_Used = 1, // 1：已使用
    KKBCouponStatus_Expire = 1000, // 1000: 已过期（本地数据）
};

typedef NS_ENUM(NSInteger, KKBCouponType) {
    KKBCouponType_ConditionalSubtraction = 0, // 满减
    KKBCouponType_Subtraction = 1, // 直减
    KKBCouponType_Discount = 2, // 折扣、打折
};

@interface KKBCouponModel : KKBBaseModel

@property (nonatomic, strong) NSString *ID; // "id": "c111"
@property (nonatomic, strong) NSString *facadeName; // "1111大促销",//优惠券名称
@property (nonatomic, strong) NSString *tip; // "c111",//使用须知
@property (nonatomic, strong) NSString *desc; // "大促销大促销大促销大促销",//描述
@property (nonatomic, assign) KKBCouponType type; // 优惠券类型
@property (nonatomic, assign) double achieveMoney; // 5000,//满足金额 用于满减和折扣
@property (nonatomic, assign) double discount; // 1,//减1元
@property (nonatomic, assign) KKBCouponStatus useStatus;
@property (nonatomic, strong) NSDate *startTime; // 有效期开始时间
@property (nonatomic, strong) NSDate *endTime; // 有效期开始时间

//@property (nonatomic, assign) BOOL isExpire; // 是否已过期
@property (nonatomic, assign) BOOL isExpanded; // 界面使用，列表是否展开状态

@end

@interface KKBMyCouponListModel : KKBBaseModel

@property (nonatomic, assign) NSInteger total;
@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) NSInteger limit;
@property (nonatomic, assign) BOOL hasNextPage;
@property (nonatomic, copy) NSArray<KKBCouponModel *> *list;

@end

NS_ASSUME_NONNULL_END
