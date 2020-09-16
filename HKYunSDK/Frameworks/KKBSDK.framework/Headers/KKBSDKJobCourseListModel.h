//
//  KKBSDKJobCourseListModel.h
//  KKBSDK
//
//  Created by Duane on 2020/4/16.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@class KKBMyCourseModel;
@class KKBSDKJobPositionModel;

@interface KKBSDKJobCourseBannerInfoModel : KKBBaseModel

@property (nonatomic, strong)NSString *logo; // "https://ai.bdstatic.com/file/B58AD63CD37449FB9C59F0F049C6B1E3",
@property (nonatomic, strong)NSString *url; // "https://www.baidu.com"

@end

@interface KKBSDKJobCourseBannerModel : KKBBaseModel

@property (nonatomic, strong)KKBSDKJobCourseBannerInfoModel *pc;
@property (nonatomic, strong)KKBSDKJobCourseBannerInfoModel *wap;
@property (nonatomic, strong)KKBSDKJobCourseBannerInfoModel *app;

@end

@interface KKBSDKJobCourseListModel : KKBBaseModel

@property (nonatomic, strong)NSArray<KKBMyCourseModel *> *course;
@property (nonatomic, strong)NSArray<KKBSDKJobPositionModel *> *position;
@property (nonatomic, strong)KKBSDKJobCourseBannerModel *banner;

@end

NS_ASSUME_NONNULL_END
