//
//  KKBCoursePayStatusModel.h
//  KaiKeBa
//
//  Created by Duane on 2019/8/21.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBCoursePayStatusModel : KKBBaseModel

@property (nonatomic, strong)NSString *productCode;
@property (nonatomic, assign)BOOL status;

@end

NS_ASSUME_NONNULL_END
