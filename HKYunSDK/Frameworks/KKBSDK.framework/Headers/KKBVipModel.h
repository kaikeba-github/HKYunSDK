//
//  KKBVipModel.h
//  KaiKeBa
//
//  Created by Duane on 2019/12/13.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KKBVipPrivilegesBitmap) {
    KKBVipPrivilegesBitmap_Galaxy = 1, // 星系
    KKBVipPrivilegesBitmap_Course = 2, // 大课
};

typedef NS_ENUM(NSInteger, KKBVipStatus) {
    KKBVipStatus_Unsellable = 0, // 下架
    KKBVipStatus_Normal = 1, // 上架
};

typedef NS_ENUM(NSInteger, KKBUserVipStatus) {
    KKBUserVipStatus_None = 0, // 未购买
    KKBUserVipStatus_Normal = 1, // 已购买
    KKBUserVipStatus_Expire = 2, // 已过期
};

@interface KKBVipPrivilegesModel : KKBGalaxyListModel

@end

@interface KKBVipPrivilegesListModel : KKBBaseModel

@property (nonatomic, assign) KKBVipPrivilegesBitmap bitmap;
@property (nonatomic, strong) NSArray<KKBVipPrivilegesModel *> *data;

@end

@interface KKBVipModel : KKBBaseModel

@property (nonatomic, assign) uintID vipId;
@property (nonatomic, copy) NSString *name; // "会员黑卡",
@property (nonatomic, copy) NSString *remark; // "您高贵身份的象征巴拉巴拉爱我的了我",
@property (nonatomic, copy) NSString *vipPic;
@property (nonatomic, copy) NSString *tagPic;
@property (nonatomic, copy) NSString *mallUrl; //商品详情页地址
@property (nonatomic, assign) KKBVipStatus status;
@property (nonatomic, assign) KKBUserVipStatus userVipStatus;
@property (nonatomic, copy) NSDate *expiredTime;
@property (nonatomic, strong) NSArray<KKBVipPrivilegesListModel *> *privileges;

- (KKBVipPrivilegesListModel *)galaxyPrivilegesModel;

@end

NS_ASSUME_NONNULL_END
