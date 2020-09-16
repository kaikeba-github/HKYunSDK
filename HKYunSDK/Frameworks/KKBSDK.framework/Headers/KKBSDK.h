//
//  KKBSDK.h
//  KKBSDK
//
//  Created by Duane on 2020/2/26.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//! Project version number for KKBSDK.
FOUNDATION_EXPORT double KKBSDKVersionNumber;

//! Project version string for KKBSDK.
FOUNDATION_EXPORT const unsigned char KKBSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <KKBSDK/PublicHeader.h>

#pragma mark - Header

#import <KKBSDK/KKBLogDefine.h>

#import <KKBSDK/KKBSDKDataType.h>
#import <KKBSDK/KKBSDKConst.h>
#import <KKBSDK/KKBSDKMacro.h>

#import <KKBSDK/KKBBaseModel.h>
#import <KKBSDK/KKBLearningCenterRequest.h>

#pragma mark - Passport

#import <KKBSDK/KKBSDKLoginSessionModel.h>
#import <KKBSDK/KKBSDKLoginSessionRequest.h>
#import <KKBSDK/KKBSDKAppLoginStatusReqeust.h>

#pragma mark - UC

#import <KKBSDK/KKBLCLoginModel.h>
#import <KKBSDK/KKBUserInfoModel.h>
#import <KKBSDK/KKBUserStudyInfoModel.h>
#import <KKBSDK/KKBStudentWalletBalanceModel.h>

#import <KKBSDK/KKBIndustryModel.h>
#import <KKBSDK/KKBIndustryRequest.h>
#import <KKBSDK/KKBAccountCloseRequest.h>

#pragma mark - Universe

#import <KKBSDK/KKBGalaxyListModel.h>
#import <KKBSDK/KKBVipModel.h>

#pragma mark - QA

#import <KKBSDK/KKBQAModel.h>

#pragma mark - AD
#import <KKBSDK/KKBAdInfoModel.h>
#import <KKBSDK/KKBAdInfoRequest.h>

#pragma mark - Course

#import <KKBSDK/KKBCourseContractState.h>
#import <KKBSDK/KKBResModel.h>
#import <KKBSDK/KKBContentModel.h>
#import <KKBSDK/KKBSectionModel.h>
#import <KKBSDK/KKBChapterModel.h>
#import <KKBSDK/KKBCourseModel.h>
#import <KKBSDK/KKBMyCourseModel.h>

#import <KKBSDK/KKBCourseChapterSpuInfoRequest.h>
#import <KKBSDK/KKBCourseChapterSpuModel.h>
#import <KKBSDK/KKBCourseInfoRequest.h>

#pragma mark - Exam

#import <KKBSDK/KKBExamToken.h>
#import <KKBSDK/KKBExamTokenRequest.h>
#import <KKBSDK/KKBPlanetExamInfoRequest.h>
#import <KKBSDK/KKBSDKCourseExamInfoRequest.h>
#import <KKBSDK/KKBSDKCourseQuestionnaireInfoRequest.h>

#pragma mark - Live

#import <KKBSDK/KKBLiveIMModel.h>
#import <KKBSDK/KKBIMLoginModel.h>

#import <KKBSDK/KKBIMSigRequest.h>

#pragma mark - Job

#import <KKBSDK/KKBSDKJobBaseRequest.h>
#import <KKBSDK/KKBSDKJobCityRequest.h>
#import <KKBSDK/KKBSDKJobCityListModel.h>
#import <KKBSDK/KKBSDKJobCityModel.h>
#import <KKBSDK/KKBSDKJobFilterRequest.h>
#import <KKBSDK/KKBSDKJobFilterModel.h>
#import <KKBSDK/KKBSDKJobFilterListModel.h>
#import <KKBSDK/KKBSDKJobResumeModel.h>
#import <KKBSDK/KKBSDKJobCourseListModel.h>

#import <KKBSDK/KKBSDKJobPositionModel.h>
#import <KKBSDK/KKBSDKJobPositionListModel.h>
#import <KKBSDK/KKBSDKCoursePositionListRequest.h>
#import <KKBSDK/KKBSDKJobPositionInfoRequest.h>
#import <KKBSDK/KKBSDKJobMyResumeRequest.h>
#import <KKBSDK/KKBSDKJobPositionSendRequest.h>
#import <KKBSDK/KKBSDKJobPositionSendListRequest.h>
#import <KKBSDK/KKBSDKJobPositionCollectRequest.h>
#import <KKBSDK/KKBSDKJobPositionCollectListRequest.h>
#import <KKBSDK/KKBSDKJobAllJobRequest.h>
#import <KKBSDK/KKBSDKJobCourseListRequest.h>

#pragma mark - Manager

#import <KKBSDK/KKBInterfaceDomain+KKBSDK.h>
#import <KKBSDK/KKBUserCenterManager.h>
#import <KKBSDK/KKBSDK3rdLoginManager.h>
#import <KKBSDK/KKBSignInAppleManager.h>
#import <KKBSDK/KKBCourseManager.h>
#import <KKBSDK/KKBEECompanyManager.h>
#import <KKBSDK/KKBLearningProgressManager.h>
#import <KKBSDK/KKBSDKLiveStatisticsManager.h>
#import <KKBSDK/KKBUserDefaultsManager+KKBSDK.h>
#import <KKBSDK/KKBAppVersionControl.h>
