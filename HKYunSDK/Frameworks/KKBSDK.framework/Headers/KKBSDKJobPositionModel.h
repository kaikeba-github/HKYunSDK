//
//  KKBSDKJobPositionModel.h
//  KKBSDK
//
//  Created by Duane on 2020/4/14.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBSDKJobPositionModel : KKBBaseModel

@property (nonatomic, assign) uintID ID; // "id": 104,
@property (nonatomic, assign) NSInteger status; // 1,
@property (nonatomic, strong) NSString *welfareTag; // "1,3,5",//福利标签：1五险一金，2定期体检，3年终奖，4带薪年假，5员工旅游，6免费班车，7节日福利，8补充医疗
@property (nonatomic, strong) NSString *content; // "test",//职位描述
@property (nonatomic, assign) uintID companyId; // 83,
@property (nonatomic, assign) uintID cityId; // 3,
@property (nonatomic, strong) NSString *positionName; // "333",
@property (nonatomic, assign) NSUInteger salaryMin; // 3,
@property (nonatomic, assign) NSUInteger salaryMax; // 5,
@property (nonatomic, assign) NSInteger workExperience; // 2,
@property (nonatomic, strong) NSString *workExperienceInfo; // 工作经验
@property (nonatomic, assign) NSInteger education; // 2,
@property (nonatomic, strong) NSString *educationInfo; // 学历要求
@property (nonatomic, assign) NSUInteger yearEndBonus; // 3,
@property (nonatomic, strong) NSString *salary; //"3-5K",
@property (nonatomic, strong) NSString *salaryMonths; // 14薪",//十几薪
@property (nonatomic, strong) NSString *city; // "",
@property (nonatomic, strong) NSString *companyName; // "333",
@property (nonatomic, strong) NSString *companyContent; // test",//公司简介
@property (nonatomic, strong) NSString *logo; // "http://test.res.kaikeba.com/other/123/20200330165615-84403/FgYT0uuDaetH9xNCpJGkdfrONfOZ.png"
@property (nonatomic, assign) NSInteger stage; // 2,//融资阶段: 1.未融资, 2.天使轮, 3.A轮, 4.B轮, 5.C轮, 6. D轮及以上, 7.上市公司, 8.不需要融资
@property (nonatomic, assign) NSInteger scale; // 1,//公司规模: 1. 0-20人, 2. 20-99人, 3. 100-499人, 4. 500-999人, 5. 1000-9999人, 6. 10000人及以上

@end

@interface KKBSDKJobPositionDetailModel : KKBSDKJobPositionModel

@property (nonatomic, assign) BOOL collectStatus; // 1,//0未收藏 1收藏
@property (nonatomic, assign) BOOL deliverStatus; // 0,//1已投递 0未投递
@property (nonatomic, assign) uintID resumeId; // 123 //已上传的简历id
@property (nonatomic, strong) NSString *resumeName; // "王东洋简历aaa.doc"//已上传的简历名称

@end

@interface KKBSDKJobPositionCollectModel : KKBSDKJobPositionModel

@property (nonatomic, strong) NSDate *createDate; // "2020-03-02 16:32:49",

@end


typedef NS_ENUM(NSInteger, KKBSDKJobPositionPostResult) {
    KKBSDKJobPositionPostResult_Communication = 0, // 待沟通
    KKBSDKJobPositionPostResult_Interview = 1, // 邀请面试
    KKBSDKJobPositionPostResult_Refused = 2, // 不合适
};

@interface KKBSDKJobPositionPostModel : KKBSDKJobPositionModel

@property (nonatomic, assign) uintID postId; // "id": 9,
@property (nonatomic, assign) KKBSDKJobPositionPostResult result; // 投递状态
@property (nonatomic, strong) NSDate *createdAt; // "2020-03-02 16:28:45",

@end

NS_ASSUME_NONNULL_END
