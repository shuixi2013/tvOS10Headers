/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol INPersonHandleExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,retain) NSString * label; 
@required
-(id)init;
-(void)setType:(long long)arg1;
-(long long)type;
-(NSString *)value;
-(void)setValue:(id)arg1;
-(NSString *)label;
-(void)setLabel:(id)arg1;

@end

