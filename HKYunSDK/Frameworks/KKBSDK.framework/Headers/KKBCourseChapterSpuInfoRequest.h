//
//  KKBCourseChapterSpuInfoRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2020/3/3.
//  Copyright © 2020 kaikeba. All rights reserved.
//

#import "KKBBaseMmsRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBCourseChapterSpuInfoRequest : KKBBaseMmsRequest

- (instancetype)initWithUid:(uintID)uid WithCourseId:(uintID)courseId WithChapterId:(uintID)chapterId;

@end

NS_ASSUME_NONNULL_END
