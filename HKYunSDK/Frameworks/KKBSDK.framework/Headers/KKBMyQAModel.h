//
//  KKBMyQAModel.h
//  KaiKeBa
//
//  Created by Duane on 2019/8/7.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"
#import "KKBQAModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBMyQAModel : KKBBaseModel

@property (nonatomic, assign) uintID courseId;
@property (nonatomic, strong) NSString *courseName;
@property (nonatomic, assign) NSInteger askNum;
@property (nonatomic, assign) NSInteger threadNum;
@property (nonatomic, assign) KKBQAType type;

@end

NS_ASSUME_NONNULL_END
