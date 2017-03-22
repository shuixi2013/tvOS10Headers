/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIView, NSArray;


@protocol _WKFormInputSession <NSObject>
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> userObject; 
@property (nonatomic,readonly) id<_WKFocusedElementInfo> focusedElementInfo; 
@property (nonatomic,copy) NSString * accessoryViewCustomButtonTitle; 
@property (nonatomic,retain) UIView * customInputView; 
@property (nonatomic,copy) NSArray * suggestions; 
@property (assign,nonatomic) BOOL accessoryViewShouldNotShow; 
@property (nonatomic,copy) NSString * textContentType; 
@property (assign,nonatomic) BOOL forceSecureTextEntry; 
@required
-(BOOL)isValid;
-(NSString *)textContentType;
-(void)setTextContentType:(id)arg1;
-(void)setSuggestions:(id)arg1;
-(NSArray *)suggestions;
-(NSObject*<NSSecureCoding>)userObject;
-(id<_WKFocusedElementInfo>)focusedElementInfo;
-(NSString *)accessoryViewCustomButtonTitle;
-(void)setAccessoryViewCustomButtonTitle:(id)arg1;
-(UIView *)customInputView;
-(void)setCustomInputView:(id)arg1;
-(BOOL)accessoryViewShouldNotShow;
-(void)setAccessoryViewShouldNotShow:(BOOL)arg1;
-(BOOL)forceSecureTextEntry;
-(void)setForceSecureTextEntry:(BOOL)arg1;

@end

