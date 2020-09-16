//
//  KKBCourseManager.h
//  KaiKeBa
//
//  Created by Duane on 2019/3/28.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KKBSDK/KKBMyCourseModel.h>
#import <KKBSDK/KKBCourseModel.h>
#import <ReactiveObjC/ReactiveObjC.h>

NS_ASSUME_NONNULL_BEGIN

typedef KKBBlockNSError KKBCourseManagerBlock;
typedef void(^KKBCourseContentDetailBlock)(NSError * _Nullable error, KKBContentModel * _Nullable content);

@interface KKBCourseManager : NSObject

DEFINE_SINGLETON_FOR_H(KKBCourseManager)

@property(nonatomic, strong, readonly) RACSignal<NSArray<KKBMyCourseModel *> *> *coursesUpdateSignal;
@property (nonatomic, strong, readonly) NSArray<KKBMyCourseModel *> *courses;

- (KKBCourseStatus)statusOfCourse:(uintID)courseId; // 如果没有该课程返回 KKBCourseStatus_Normal(防止出错时用户无法使用)
- (void)requestMyCourses:(KKBCourseManagerBlock)completion;
- (void)getContentDetail:(uintID)contentId WithIgnoreHttpCache:(BOOL)ignoreCache Complete:(KKBCourseContentDetailBlock)completeBlock;

@end

NS_ASSUME_NONNULL_END
