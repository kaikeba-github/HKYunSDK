//
//  KKBNpsSatisfactionFeedbackModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/27.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBNpsSatisfactionFeedbackModel : KKBBaseModel

@property (nonatomic, assign)BOOL status;  // 是否弹窗：0:否，1:是
@property (nonatomic, strong)NSString *score; //评分
@property (nonatomic, strong)NSString *content; //内容

@end

NS_ASSUME_NONNULL_END
