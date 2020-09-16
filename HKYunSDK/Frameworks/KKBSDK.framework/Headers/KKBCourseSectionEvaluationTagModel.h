//
//  KKBCourseSectionEvaluationTagModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/28.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBCourseSectionEvaluationTagModel : KKBBaseModel

@property (nonatomic, assign)BOOL selected;
@property (nonatomic, assign)NSInteger tagId;
@property (nonatomic, strong)NSString *tagName;

@end

NS_ASSUME_NONNULL_END
