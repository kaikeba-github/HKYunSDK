//
//  KKBCourseInfoRequest.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/9.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBCourseInfoRequest : KKBLearningCenterRequest

- (instancetype)initWithCourseId:(uintID)courseId;

@end

@interface KKBChapterInfoRequest : KKBLearningCenterRequest

- (instancetype)initWithCourseId:(uintID)courseId chapterId:(uintID)chapterId;

@end

@interface KKBMultiChapterInfoRequest : KKBLearningCenterRequest

- (instancetype)initWithCourseId:(uintID)courseId chapterId:(NSArray<NSNumber *> *)chapterIds;

@end

NS_ASSUME_NONNULL_END
