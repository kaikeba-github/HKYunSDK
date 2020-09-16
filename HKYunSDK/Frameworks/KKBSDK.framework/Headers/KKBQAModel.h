//
//  KKBQAModel.h
//  KaiKeBa
//
//  Created by Duane on 2019/8/6.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KKBQAType) {
    KKBQAType_Course = 1, // 1:课程帖
//    KKBQAType_CourseChapter = 2, // 2:章节贴（目前留空占位）
    KKBQAType_Planet = 3, // 3:星球贴
};

@interface KKBAnswerModel : KKBBaseModel

@property (nonatomic, assign) uintID threadId; // 帖子id
@property (nonatomic, assign) uintID threadAskId; // 帖子回答id
@property (nonatomic, strong) NSString *content; // 回答内容
@property (nonatomic, strong) NSString *avatar; // 回答人头像
@property (nonatomic, strong) NSString *nickname; // 昵称
@property (nonatomic, strong) NSDate *answerTime; // 回复时间
@property (nonatomic, strong) NSArray<NSDictionary *> *pics; // 回复图片
@property (nonatomic, assign) NSInteger stars; // 点赞数
@property (nonatomic, assign) BOOL isTop;
@property (nonatomic, assign) BOOL isRecommend;
@property (nonatomic, assign) BOOL isOfficial;
@property (nonatomic, strong) NSString *roleName; // 头衔
@property (nonatomic, assign) uintID uid;
@property (nonatomic, assign) BOOL isSelf;

@end

@interface KKBQuestionModel : KKBBaseModel

@property (nonatomic, assign) uintID threadId; // 帖子id
@property (nonatomic, assign) KKBQAType type; //帖子类型，1:课程帖，2:章节贴（目前留空占位），3:星球贴
@property (nonatomic, strong) NSString *title; // 帖子标题
@property (nonatomic, strong) NSString *content; // 提问内容
@property (nonatomic, strong) NSString *avatar; // 发帖人头像
@property (nonatomic, strong) NSString *nickname; // 昵称
@property (nonatomic, strong) NSDate *threadTime; // 发帖时间
@property (nonatomic, strong) NSArray<NSDictionary *> *pics; //发帖图片
@property (nonatomic, assign) NSInteger askNum; // 回答数
@property (nonatomic, assign) NSInteger stars; // 点赞数
@property (nonatomic, assign) NSInteger views; // 浏览数
@property (nonatomic, assign) BOOL isTop; // 是否置顶 1、是 0、否
@property (nonatomic, assign) BOOL isRecommend; // 是否推荐 1、是 0、否
@property (nonatomic, assign) BOOL isOfficial; // 是否官方 1、是 0、否
@property (nonatomic, strong) NSString *roleName; // 头衔
@property (nonatomic, assign) uintID chapterId; // 章id
@property (nonatomic, assign) uintID sectionId; // 节id
@property (nonatomic, assign) NSInteger chapterNum; // 第几章
@property (nonatomic, assign) NSInteger sectionNum; // 第几节
@property (nonatomic, assign) BOOL isSelf; // 是否自己帖子 1、是 0、否
//@property (nonatomic, assign) BOOL open; // 是否是开启状态 1 开启 0 关闭
@property (nonatomic, assign) BOOL allowAnswer; // 是否允许回答 1 允许 0 不允许
@property (nonatomic, strong) NSString *answerMsg; // "课程问答已被关闭，暂时无法使用"//当allow_answer为0时，弹出文案；allow_answer为1时该字段为空
@property (nonatomic, strong) NSArray<KKBAnswerModel *> *answerList;

@end

@interface KKBQAListModel : KKBBaseModel

@property (nonatomic, assign) NSInteger total;
@property (nonatomic, assign) BOOL isMore; // 是否还有下一页数据 1、有 0、没有
@property (nonatomic, assign) BOOL isQuestion; // 是否可以提交 1、可以 0、不可以
@property (nonatomic, assign) BOOL isOpenThread; // 0、未开启课程问答 1、已开启课程问答
@property (nonatomic, strong) NSArray<KKBQuestionModel *> *list;

@end

@interface KKBQADetailListModel : KKBBaseModel

@property (nonatomic, assign) NSInteger total;
@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) BOOL isMore; // 是否还有下一页数据 1、有 0、没有
@property (nonatomic, strong) NSArray<KKBAnswerModel *> *list;

@end

NS_ASSUME_NONNULL_END
