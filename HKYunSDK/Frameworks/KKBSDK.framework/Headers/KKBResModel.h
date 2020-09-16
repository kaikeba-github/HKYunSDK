//
//  KKBResModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/4/19.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

@class KKBLiveIMModel;
typedef NS_ENUM(NSInteger, KKBVideoResType) {   //视频类型
    KKBVideoResType_None = 0,       //未知
    KKBVideoResType_CCVideo = 1,   //CC点播
    KKBVideoResType_CCLivePlayback = 2,    //CC直播回放
    KKBVideoResType_ClassInPlayback = 3   //classIn 回放
};

typedef NS_ENUM(NSInteger, KKBCourseLiveStatus) {
    KKBCourseLiveStatus_Waiting = 0, // 未开始
    KKBCourseLiveStatus_Living = 1, // 直播中
    KKBCourseLiveStatus_End = 2, // 直播结束
    KKBCourseLiveStatus_Playback = 3, // 直播回放
    KKBCourseLiveStatus_TranscodeFail = 4, // 转码失败
    KKBCourseLiveStatus_PreparingLesson=5, //教师备课中
};

typedef NS_ENUM(NSInteger, KKBVideoStatus) { //视频转码状态
    KKBVideoStatus_None = 0,        //未知
    KKBVideoStatus_Transcoding = 1,   //转码中
    KKBVideoStatus_TranscodeCompletion = 2, //转码完成
    KKBVideoStatus_TranscodeFail = 3    //转码失败
};

typedef NS_ENUM(NSInteger,KKBLiveVendor)
{
    KKBLiveVendor_CCLive = 1, //CC live直播
    KKBLiveVendor_ClassInInteractive=2, //ClassIn 互动直播
    KKBLiveVendor_ClassInLive=3        //ClassIn Live直播
    
};


NS_ASSUME_NONNULL_BEGIN

@interface KKBResModel : KKBBaseModel


//----------------- common --------------------------
@property (nonatomic, assign)uintID          course_id;
@property (nonatomic, assign)uintID          chapter_id;
@property (nonatomic, assign)uintID          section_id;
@property (nonatomic, assign)uintID          group_id;
@property (nonatomic, assign)uintID          content_id;
@property (nonatomic, assign)NSUInteger      rank_num;
@property (nonatomic, assign)NSUInteger      progress;



//----------------------- 直播 ----------------------------
@property (nonatomic, strong)NSString         *live_id;
@property (nonatomic, assign)uintID           teacher_uid;
@property (nonatomic, assign)uintID           assistant_uid;
@property (nonatomic, strong)NSDate           *start_time;
@property (nonatomic, strong)NSDate           *end_time;
@property (nonatomic, assign)KKBCourseLiveStatus    live_status; //直播状态
@property (nonatomic, assign)KKBLiveVendor    live_vendor;  //live直播类型


//cc直播
@property (nonatomic, strong)NSString         *roomid; //cc直播、回放 roomid
@property (nonatomic, strong)NSString         *password;  //cc直播、回放 password
@property (nonatomic, strong)NSString         *template_id;

//cc直播+IM
@property (nonatomic, strong)KKBLiveIMModel   *im;

//hkyun直播
@property (nonatomic, strong)NSString *enterCode;
@property (nonatomic, strong)NSString *liveId; //慧科云直播liveId



//ClassIn
//@property (nonatomic, strong)NSString         *classin_course_id; //classin 课程id
//@property (nonatomic, strong)NSString         *classin_class_id;  //classin 课堂id
@property (nonatomic, strong)NSString         *schema; //class in互动直播跳转地址
@property (nonatomic, strong)NSString         *live_url; //class live直播地址/回放地址


//---------------------- 点播 -------------------------------
//cc视频
@property (nonatomic, assign)uintID           video_id;    //cc视频我们平台资源id
@property (nonatomic, assign)KKBVideoResType  video_vendor; //视频类型：cc回放、classin回放、cc点播
@property (nonatomic, assign)KKBVideoStatus   video_status;  //cc回放、视频状态
@property (nonatomic, strong)NSString         *ccvideo_id;//cc视频id
@property (nonatomic, strong)NSString         *ccuser_id; //cc(视频、回放)用户id
@property (nonatomic, strong)NSString         *ccapi_key; //cc(视频、回放)api_key
@property (nonatomic, assign)NSUInteger       duration;
@property (nonatomic, assign)NSUInteger       file_size;
@property (nonatomic, strong)NSString         *image;      //视频封面
@property (nonatomic, strong)NSString         *filename;


//--------------------------- CC回放 ----------------------------------
@property (nonatomic, strong)NSString        *record_live_id; //回放的原直播id（放弃使用）
@property (nonatomic, strong)NSString        *record_id;
@property (nonatomic, strong)NSString        *record_token;
@property (nonatomic, assign)NSInteger       record_type;
@property (nonatomic, assign)NSUInteger      record_time_len; //回放记录时长
@property (nonatomic, strong)NSString        *record_hash;



//---------------------- 作业 测验 资料 小课 -------------------------------
@property (nonatomic, strong)NSString         *name; //作业、资料名、小课名称
@property (nonatomic, strong)NSString         *url;  //作业、测验、资料 url
@property (nonatomic, assign)NSUInteger       size;  //文件大小
@property (nonatomic, strong)NSString         *key;  //文件URI

//作业
@property (nonatomic, assign)uintID           homework_attach_id;

//资料包
@property (nonatomic, assign)uintID           material_id;

//测验
@property (nonatomic,strong)NSString          *url_answer; //测验完成后结果链接地址

//评测
@property (nonatomic, assign)uintID           exam_id;
@property (nonatomic, strong)NSString         *title; // "【测试2】产品的思维建设",
@property (nonatomic, assign)NSInteger        exam_status; // 0,

//问卷
@property (nonatomic, strong)NSString         *form_id;
@property (nonatomic, assign)NSInteger        form_status; // 1,

//小课
@property (nonatomic, strong)NSString         *class_id; //小课课程id
@property (nonatomic, strong)NSString         *study_mobile_page_url; //小课互动脚本地址
@property (nonatomic, assign)BOOL             isEdito;//小课互动练习是否已经编辑过 0-未编辑 1-已编辑
@property (nonatomic, strong)NSString         *exercise_mobile_page_url; //小课互动练习地址

//线下活动
@property (nonatomic, assign)uintID           below_id;
@property (nonatomic, assign)BOOL             is_sign;
@property (nonatomic, strong)NSString         *address;
@property (nonatomic, strong)NSString         *email;
@property (nonatomic, strong)NSDate           *start_date;
@property (nonatomic, strong)NSDate           *end_date;
@property (nonatomic, strong)NSString         *sign_url;

@end

NS_ASSUME_NONNULL_END
