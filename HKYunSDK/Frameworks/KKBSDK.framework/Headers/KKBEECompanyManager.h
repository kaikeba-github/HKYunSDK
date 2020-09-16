//
//  KKBEECompanyManager.h
//  KKBEnterprise
//
//  Created by Duane on 2020/3/25.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KKBSDK/KKBSDKCompanyModel.h>
#import <KKBSDK/KKBSDKCompanyStudentInfoModel.h>
#import <KKBSDK/KKBMyCourseModel.h>
#import <ReactiveObjC/ReactiveObjC.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBEECompanyManager : NSObject

DEFINE_SINGLETON_FOR_H(KKBEECompanyManager)

@property (nonatomic, strong, readonly) KKBSDKCompanyModel *currentCompany;
@property (nonatomic, strong, readonly) KKBSDKCompanyStudentInfoModel *currentEmployeeInfo;

@property(nonatomic, strong, readonly) RACSignal<NSArray<KKBSDKCompanyModel *> *> *companysUpdateSignal;
@property (nonatomic, strong, readonly) NSArray<KKBSDKCompanyModel *> *companys;

@property(nonatomic, strong, readonly) RACSignal<NSArray<KKBMyCourseModel *> *> *coursesUpdateSignal;
@property (nonatomic, strong, readonly) NSArray<KKBMyCourseModel *> *courses;

- (void)switchCompany:(uintID)companyId;

- (void)refreshCompanys:(KKBBlockNSError)completion;
- (void)requestCompanyCourses:(KKBBlockNSError)completion;
- (void)requestEmployeeInfo:(KKBBlockNSError)completion;

@end

NS_ASSUME_NONNULL_END
