//
//  KKBUserInfoModel.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/1.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KKBGender) {
    KKBGender_None = 0, // 未设置
    KKBGender_Male = 1, // 男
    KKBGender_Female = 2, // 女
};

@interface KKBUserInfoVipModel : KKBBaseModel<NSCopying>

@property (nonatomic, assign) uintID vipId;
@property (nonatomic, strong) NSString *tagPic;

@end

@interface KKBUserInfoModel : KKBBaseModel<NSCopying>

@property(nonatomic, assign) uintID uid;
@property(nonatomic, strong) NSString *mobile;
@property(nonatomic, strong) NSString *nickname;
@property(nonatomic, strong) NSString *realname;
@property(nonatomic, strong) NSString *birthday;
@property(nonatomic, strong) NSString *province;
@property(nonatomic, strong) NSString *city;
@property(nonatomic, strong) NSString *area;
@property(nonatomic, strong) NSString *email;
@property(nonatomic, assign) KKBGender gender;
@property(nonatomic, strong) NSString *avatar;
@property(nonatomic, strong) NSString *company;
@property(nonatomic, assign) uintID industryId;
@property(nonatomic, strong) NSString *industry;
@property(nonatomic, assign) BOOL isBindWx;
@property(nonatomic, strong) NSArray<KKBUserInfoVipModel *> *vips;

@property(nonatomic, copy, nullable) NSDate *updateDate;
@property(nonatomic, copy) NSString *uniqueId;

@end

NS_ASSUME_NONNULL_END
