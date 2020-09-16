//
//  KKBPlanetExamModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/11/2.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@class KKBPlanetExamRankModel;
@interface KKBPlanetExamModel : KKBBaseModel
@property (nonatomic, assign)uintID examId;  //评测id
@property (nonatomic, strong)NSString *h5Rank; //排行榜
@property (nonatomic, strong)KKBPlanetExamRankModel *userInfo; //我的评测信息
@property (nonatomic, assign)NSUInteger examPassLine; // 评测通过线
@property (nonatomic, assign)CGFloat examPassPer; //通过人数的百分比
@property (nonatomic, assign)NSUInteger passedNum; //通过的人数
@property (nonatomic, assign)NSUInteger userExamHighestScore; //用户评测最高分
@property (nonatomic, strong)NSArray<KKBPlanetExamRankModel *> *examRankList;

@end

NS_ASSUME_NONNULL_END
