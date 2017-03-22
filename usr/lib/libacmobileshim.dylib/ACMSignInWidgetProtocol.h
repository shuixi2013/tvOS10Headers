/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, UITextField, NSString, UIColor, NSDictionary;


@protocol ACMSignInWidgetProtocol <NSObject>
@property (assign,nonatomic) id<ACMSignInWidgetDelegate> delegate; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UITextField * accountField; 
@property (nonatomic,readonly) UITextField * passwordField; 
@property (nonatomic,retain) NSString * accountLabelText; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,retain) NSDictionary * placeholderAttributes; 
@property (assign,nonatomic) BOOL shouldAuthenticateOnUserInput; 
@property (assign,nonatomic) CGPoint position; 
@required
-(void)setBackgroundColor:(id)arg1;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id)arg1;
-(id<ACMSignInWidgetDelegate>)delegate;
-(UIView *)view;
-(void)setPosition:(CGPoint)arg1;
-(CGPoint)position;
-(UITextField *)passwordField;
-(UITextField *)accountField;
-(NSString *)accountLabelText;
-(void)setAccountLabelText:(id)arg1;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1;
-(NSDictionary *)placeholderAttributes;
-(void)disableControls:(BOOL)arg1;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)setPlaceholderAttributes:(id)arg1;

@end

