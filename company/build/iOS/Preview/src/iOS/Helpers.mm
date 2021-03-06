//#if !#{Fuse.Controls.Native.iOS.GraphicsView:IsStripped}

#import "Helpers.h"

@implementation KeyboardView
- (BOOL)canBecomeFirstResponder { return [self isFocusable]; }
- (void)insertText:(NSString *)text {}
- (void)deleteBackward {}
- (BOOL)hasText { return NO; }
@end

@implementation SizeControl

- (void) setFrame:(CGRect)frame
{
	super.frame = frame;
	if ([self onSetFrameCallback] != nil)
		[self onSetFrameCallback](self);
}

@end

static id currentFirstResponder;

@implementation UIResponder (FirstResponder)

+(id)currentFirstResponder {
	[[UIApplication sharedApplication] sendAction:@selector(findFirstResponder:) to:nil from:nil forEvent:nil];
	id result = currentFirstResponder;
	currentFirstResponder = nil;
	return result;
}

-(void)findFirstResponder:(id)sender {
	currentFirstResponder = self;
};

@end

@implementation TextFieldDelegate

- (BOOL)textFieldShouldReturn:(UITextField *)textField
{
	return [self onActionCallback](textField);
}

- (BOOL)textField:(UITextField *)textField
	shouldChangeCharactersInRange:(NSRange)range
	replacementString:(NSString *)string
{
	if(range.length + range.location > textField.text.length)
	{
		return NO;
	}

	NSUInteger newLength = [textField.text length] + [string length] - range.length;
	return newLength <= [self maxLength];
}

@end

@implementation TextViewDelegate

- (void)textViewDidChange:(UITextView *)textView
{
	[self textChangedCallback](textView);
}

- (BOOL)textView:(UITextView *)textView
	shouldChangeTextInRange:(NSRange)range
	replacementText:(NSString *)text
{
	if(range.length + range.location > textView.text.length)
	{
		return NO;
	}

	NSUInteger newLength = [textView.text length] + [text length] - range.length;
	return newLength <= [self maxLength];
}

@end

@implementation ScrollViewDelegate

- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
	[self didScrollCallback](scrollView);
}

@end

@implementation UIControlEventHandler

- (void) action:(id)sender forEvent:(UIEvent *)event
{
	[self callback](sender, event);
}

@end

@implementation FuseGLKView

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
	[self callback](self, event);
	[super touchesBegan:touches withEvent:event];
}

- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event
{
	[self callback](self, event);
	[super touchesMoved:touches withEvent:event];
}

- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event
{
	[self callback](self, event);
	[super touchesEnded:touches withEvent:event];
}

- (void)touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event
{
	[self callback](self, event);
	[super touchesCancelled:touches withEvent:event];	
}


@end

//#endif // IsStripped
