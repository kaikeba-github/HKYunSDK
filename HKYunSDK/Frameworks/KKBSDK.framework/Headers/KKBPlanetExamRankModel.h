//
//  KKBPlanetExamRankModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/14.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBPlanetExamRankModel : KKBBaseModel
@property (nonatomic, strong)NSString *name;  //测评人名字
@property (nonatomic, assign)NSUInteger rank; //评测排名
@property (nonatomic, assign)NSUInteger score;   //分数
@property (nonatomic, assign)NSUInteger passedNum;  //第xx个通过评测的
@property (nonatomic, strong)NSString *h5Check; //评测报告


@end

NS_ASSUME_NONNULL_END
