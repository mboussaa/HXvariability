// Generated by Haxe 3.3.0
package thx.color._Hsv;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public final class Hsv_Impl_
{
	
	
	
	
	
	
	public static haxe.root.Array<java.lang.Object> create(double hue, double saturation, double value)
	{
		//line 31 "/HXvariability/color/src/thx/color/Hsv.hx"
		haxe.root.Array<java.lang.Object> this1 = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (hue) ), ((java.lang.Object) (saturation) ), ((java.lang.Object) (value) )});
		//line 31 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((haxe.root.Array<java.lang.Object>) (this1) );
	}
	
	
	public static haxe.root.Array<java.lang.Object> fromFloats(haxe.root.Array<java.lang.Object> arr)
	{
		//line 34 "/HXvariability/color/src/thx/color/Hsv.hx"
		thx.ArrayFloats.resize(arr, 3, null);
		//line 35 "/HXvariability/color/src/thx/color/Hsv.hx"
		haxe.root.Array<java.lang.Object> this1 = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (((double) (haxe.lang.Runtime.toDouble(arr.__get(0))) )) ), ((java.lang.Object) (((double) (haxe.lang.Runtime.toDouble(arr.__get(1))) )) ), ((java.lang.Object) (((double) (haxe.lang.Runtime.toDouble(arr.__get(2))) )) )});
		//line 35 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((haxe.root.Array<java.lang.Object>) (this1) );
	}
	
	
	public static haxe.root.Array<java.lang.Object> fromString(java.lang.String color)
	{
		//line 39 "/HXvariability/color/src/thx/color/Hsv.hx"
		thx.color.parse.ColorInfo info = thx.color.parse.ColorParser.parseColor(color);
		//line 40 "/HXvariability/color/src/thx/color/Hsv.hx"
		if (( null == info )) 
		{
			//line 41 "/HXvariability/color/src/thx/color/Hsv.hx"
			return null;
		}
		
		//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
		try 
		{
			//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
			java.lang.String _g = info.name;
			//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
			{
				//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
				java.lang.String __temp_svar3 = (_g);
				//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
				boolean __temp_executeDef4 = true;
				//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
				switch (__temp_svar3.hashCode())
				{
					case 103627:
					{
						//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
						if (__temp_svar3.equals("hsv")) 
						{
							//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
							__temp_executeDef4 = false;
							//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
							return ((haxe.root.Array<java.lang.Object>) (thx.color.parse.ColorParser.getFloatChannels(info.channels, 3, false)) );
						}
						
						//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
						break;
					}
					
					
				}
				
				//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
				if (__temp_executeDef4) 
				{
					//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
					return null;
				}
				else
				{
					//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
					throw null;
				}
				
			}
			
		}
		catch (java.lang.Throwable __temp_catchallException1)
		{
			//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
			haxe.lang.Exceptions.setException(__temp_catchallException1);
			//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
			java.lang.Object __temp_catchall2 = __temp_catchallException1;
			//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
			if (( __temp_catchall2 instanceof haxe.lang.HaxeException )) 
			{
				//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
				__temp_catchall2 = ((haxe.lang.HaxeException) (__temp_catchallException1) ).obj;
			}
			
			//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
			{
				//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
				java.lang.Object e = __temp_catchall2;
				//line 43 "/HXvariability/color/src/thx/color/Hsv.hx"
				return null;
			}
			
		}
		
		
	}
	
	
	public static haxe.root.Array<java.lang.Object> _new(haxe.root.Array<java.lang.Object> channels)
	{
		//line 51 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((haxe.root.Array<java.lang.Object>) (channels) );
	}
	
	
	public static java.lang.Object analogous(haxe.root.Array<java.lang.Object> this1, java.lang.Object spread)
	{
		//line 55 "/HXvariability/color/src/thx/color/Hsv.hx"
		double __temp_spread125 = ( (haxe.lang.Runtime.eq(spread, null)) ? (30.0) : (((double) (haxe.lang.Runtime.toDouble(spread)) )) );
		//line 55 "/HXvariability/color/src/thx/color/Hsv.hx"
		java.lang.Object this2 = null;
		//line 55 "/HXvariability/color/src/thx/color/Hsv.hx"
		{
			//line 56 "/HXvariability/color/src/thx/color/Hsv.hx"
			haxe.root.Array<java.lang.Object> __temp_odecl1 = thx.color._Hsv.Hsv_Impl_.rotate(this1,  - (__temp_spread125) );
			//line 57 "/HXvariability/color/src/thx/color/Hsv.hx"
			haxe.root.Array<java.lang.Object> __temp_odecl2 = thx.color._Hsv.Hsv_Impl_.rotate(this1, __temp_spread125);
			//line 55 "/HXvariability/color/src/thx/color/Hsv.hx"
			this2 = new haxe.lang.DynamicObject(new java.lang.String[]{"_0", "_1"}, new java.lang.Object[]{__temp_odecl1, __temp_odecl2}, new java.lang.String[]{}, new double[]{});
		}
		
		//line 55 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((java.lang.Object) (this2) );
	}
	
	
	public static haxe.root.Array<java.lang.Object> complement(haxe.root.Array<java.lang.Object> this1)
	{
		//line 61 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Hsv.Hsv_Impl_.rotate(this1, ((double) (180) ));
	}
	
	
	public static haxe.root.Array<java.lang.Object> interpolate(haxe.root.Array<java.lang.Object> this1, haxe.root.Array<java.lang.Object> other, double t)
	{
		//line 64 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((haxe.root.Array<java.lang.Object>) (new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (thx.Floats.interpolateAngle(t, ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(0))) ), ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (other) ).__get(0))) ), null)) ), ((java.lang.Object) (thx.Floats.interpolate(t, ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(1))) ), ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (other) ).__get(1))) ))) ), ((java.lang.Object) (thx.Floats.interpolate(t, ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) ), ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (other) ).__get(2))) ))) )})) );
	}
	
	
	public static haxe.root.Array<java.lang.Object> interpolateWidest(haxe.root.Array<java.lang.Object> this1, haxe.root.Array<java.lang.Object> other, double t)
	{
		//line 71 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((haxe.root.Array<java.lang.Object>) (new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (thx.Floats.interpolateAngleWidest(t, ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(0))) ), ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (other) ).__get(0))) ), null)) ), ((java.lang.Object) (thx.Floats.interpolate(t, ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(1))) ), ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (other) ).__get(1))) ))) ), ((java.lang.Object) (thx.Floats.interpolate(t, ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) ), ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (other) ).__get(2))) ))) )})) );
	}
	
	
	public static haxe.root.Array<java.lang.Object> min(haxe.root.Array<java.lang.Object> this1, haxe.root.Array<java.lang.Object> other)
	{
		//line 78 "/HXvariability/color/src/thx/color/Hsv.hx"
		haxe.root.Array<java.lang.Object> this2 = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (java.lang.Math.min(((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(0))) ), ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (other) ).__get(0))) ))) ), ((java.lang.Object) (java.lang.Math.min(((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(1))) ), ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (other) ).__get(1))) ))) ), ((java.lang.Object) (java.lang.Math.min(((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) ), ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (other) ).__get(2))) ))) )});
		//line 78 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((haxe.root.Array<java.lang.Object>) (this2) );
	}
	
	
	public static haxe.root.Array<java.lang.Object> max(haxe.root.Array<java.lang.Object> this1, haxe.root.Array<java.lang.Object> other)
	{
		//line 81 "/HXvariability/color/src/thx/color/Hsv.hx"
		haxe.root.Array<java.lang.Object> this2 = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (java.lang.Math.max(((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(0))) ), ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (other) ).__get(0))) ))) ), ((java.lang.Object) (java.lang.Math.max(((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(1))) ), ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (other) ).__get(1))) ))) ), ((java.lang.Object) (java.lang.Math.max(((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) ), ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (other) ).__get(2))) ))) )});
		//line 81 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((haxe.root.Array<java.lang.Object>) (this2) );
	}
	
	
	public static haxe.root.Array<java.lang.Object> normalize(haxe.root.Array<java.lang.Object> this1)
	{
		//line 84 "/HXvariability/color/src/thx/color/Hsv.hx"
		double hue = thx.Floats.wrapCircular(((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(0))) ), ((double) (360) ));
		//line 84 "/HXvariability/color/src/thx/color/Hsv.hx"
		haxe.root.Array<java.lang.Object> this2 = null;
		//line 84 "/HXvariability/color/src/thx/color/Hsv.hx"
		double v = ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(1))) );
		//line 84 "/HXvariability/color/src/thx/color/Hsv.hx"
		double tmp = ( (( v < 0 )) ? (((double) (0) )) : (( (( v > 1 )) ? (((double) (1) )) : (v) )) );
		//line 84 "/HXvariability/color/src/thx/color/Hsv.hx"
		double v1 = ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) );
		//line 84 "/HXvariability/color/src/thx/color/Hsv.hx"
		this2 = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (hue) ), ((java.lang.Object) (tmp) ), ((java.lang.Object) (( (( v1 < 0 )) ? (((double) (0) )) : (( (( v1 > 1 )) ? (((double) (1) )) : (v1) )) )) )});
		//line 84 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((haxe.root.Array<java.lang.Object>) (this2) );
	}
	
	
	public static haxe.root.Array<java.lang.Object> rotate(haxe.root.Array<java.lang.Object> this1, double angle)
	{
		//line 87 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Hsv.Hsv_Impl_.normalize(thx.color._Hsv.Hsv_Impl_.withHue(this1, ( ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(0))) ) + angle )));
	}
	
	
	public static haxe.root.Array<java.lang.Object> roundTo(haxe.root.Array<java.lang.Object> this1, int decimals)
	{
		//line 90 "/HXvariability/color/src/thx/color/Hsv.hx"
		haxe.root.Array<java.lang.Object> this2 = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (thx.Floats.roundTo(((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(0))) ), decimals)) ), ((java.lang.Object) (thx.Floats.roundTo(((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(1))) ), decimals)) ), ((java.lang.Object) (thx.Floats.roundTo(((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) ), decimals)) )});
		//line 90 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((haxe.root.Array<java.lang.Object>) (this2) );
	}
	
	
	public static java.lang.Object split(haxe.root.Array<java.lang.Object> this1, java.lang.Object spread)
	{
		//line 93 "/HXvariability/color/src/thx/color/Hsv.hx"
		double __temp_spread126 = ( (haxe.lang.Runtime.eq(spread, null)) ? (144.0) : (((double) (haxe.lang.Runtime.toDouble(spread)) )) );
		//line 93 "/HXvariability/color/src/thx/color/Hsv.hx"
		java.lang.Object this2 = null;
		//line 93 "/HXvariability/color/src/thx/color/Hsv.hx"
		{
			//line 94 "/HXvariability/color/src/thx/color/Hsv.hx"
			haxe.root.Array<java.lang.Object> __temp_odecl1 = thx.color._Hsv.Hsv_Impl_.rotate(this1,  - (__temp_spread126) );
			//line 95 "/HXvariability/color/src/thx/color/Hsv.hx"
			haxe.root.Array<java.lang.Object> __temp_odecl2 = thx.color._Hsv.Hsv_Impl_.rotate(this1, __temp_spread126);
			//line 93 "/HXvariability/color/src/thx/color/Hsv.hx"
			this2 = new haxe.lang.DynamicObject(new java.lang.String[]{"_0", "_1"}, new java.lang.Object[]{__temp_odecl1, __temp_odecl2}, new java.lang.String[]{}, new double[]{});
		}
		
		//line 93 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((java.lang.Object) (this2) );
	}
	
	
	public static java.lang.Object square(haxe.root.Array<java.lang.Object> this1)
	{
		//line 99 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Hsv.Hsv_Impl_.tetrad(this1, ((double) (90) ));
	}
	
	
	public static java.lang.Object tetrad(haxe.root.Array<java.lang.Object> this1, double angle)
	{
		//line 102 "/HXvariability/color/src/thx/color/Hsv.hx"
		java.lang.Object this2 = null;
		//line 102 "/HXvariability/color/src/thx/color/Hsv.hx"
		{
			//line 103 "/HXvariability/color/src/thx/color/Hsv.hx"
			haxe.root.Array<java.lang.Object> __temp_odecl1 = thx.color._Hsv.Hsv_Impl_.rotate(this1, ((double) (0) ));
			//line 104 "/HXvariability/color/src/thx/color/Hsv.hx"
			haxe.root.Array<java.lang.Object> __temp_odecl2 = thx.color._Hsv.Hsv_Impl_.rotate(this1, angle);
			//line 105 "/HXvariability/color/src/thx/color/Hsv.hx"
			haxe.root.Array<java.lang.Object> __temp_odecl3 = thx.color._Hsv.Hsv_Impl_.rotate(this1, ((double) (180) ));
			//line 106 "/HXvariability/color/src/thx/color/Hsv.hx"
			haxe.root.Array<java.lang.Object> __temp_odecl4 = thx.color._Hsv.Hsv_Impl_.rotate(this1, ( 180 + angle ));
			//line 102 "/HXvariability/color/src/thx/color/Hsv.hx"
			this2 = new haxe.lang.DynamicObject(new java.lang.String[]{"_0", "_1", "_2", "_3"}, new java.lang.Object[]{__temp_odecl1, __temp_odecl2, __temp_odecl3, __temp_odecl4}, new java.lang.String[]{}, new double[]{});
		}
		
		//line 102 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((java.lang.Object) (this2) );
	}
	
	
	public static java.lang.Object triad(haxe.root.Array<java.lang.Object> this1)
	{
		//line 110 "/HXvariability/color/src/thx/color/Hsv.hx"
		java.lang.Object this2 = null;
		//line 110 "/HXvariability/color/src/thx/color/Hsv.hx"
		{
			//line 111 "/HXvariability/color/src/thx/color/Hsv.hx"
			haxe.root.Array<java.lang.Object> __temp_odecl1 = thx.color._Hsv.Hsv_Impl_.rotate(this1, ((double) (-120) ));
			//line 112 "/HXvariability/color/src/thx/color/Hsv.hx"
			haxe.root.Array<java.lang.Object> __temp_odecl2 = thx.color._Hsv.Hsv_Impl_.rotate(this1, ((double) (0) ));
			//line 113 "/HXvariability/color/src/thx/color/Hsv.hx"
			haxe.root.Array<java.lang.Object> __temp_odecl3 = thx.color._Hsv.Hsv_Impl_.rotate(this1, ((double) (120) ));
			//line 110 "/HXvariability/color/src/thx/color/Hsv.hx"
			this2 = new haxe.lang.DynamicObject(new java.lang.String[]{"_0", "_1", "_2"}, new java.lang.Object[]{__temp_odecl1, __temp_odecl2, __temp_odecl3}, new java.lang.String[]{}, new double[]{});
		}
		
		//line 110 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((java.lang.Object) (this2) );
	}
	
	
	public static haxe.root.Array<java.lang.Object> withAlpha(haxe.root.Array<java.lang.Object> this1, double alpha)
	{
		//line 117 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((haxe.root.Array<java.lang.Object>) (((haxe.root.Array) (this1.concat(((haxe.root.Array<java.lang.Object>) (((haxe.root.Array) (new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (alpha) )})) )) ))) )) );
	}
	
	
	public static haxe.root.Array<java.lang.Object> withHue(haxe.root.Array<java.lang.Object> this1, double newhue)
	{
		//line 120 "/HXvariability/color/src/thx/color/Hsv.hx"
		haxe.root.Array<java.lang.Object> this2 = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (newhue) ), ((java.lang.Object) (((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(1))) )) ), ((java.lang.Object) (((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) )) )});
		//line 120 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((haxe.root.Array<java.lang.Object>) (this2) );
	}
	
	
	public static haxe.root.Array<java.lang.Object> withValue(haxe.root.Array<java.lang.Object> this1, double newvalue)
	{
		//line 123 "/HXvariability/color/src/thx/color/Hsv.hx"
		haxe.root.Array<java.lang.Object> this2 = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(0))) )) ), ((java.lang.Object) (((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(1))) )) ), ((java.lang.Object) (newvalue) )});
		//line 123 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((haxe.root.Array<java.lang.Object>) (this2) );
	}
	
	
	public static haxe.root.Array<java.lang.Object> withSaturation(haxe.root.Array<java.lang.Object> this1, double newsaturation)
	{
		//line 126 "/HXvariability/color/src/thx/color/Hsv.hx"
		haxe.root.Array<java.lang.Object> this2 = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(0))) )) ), ((java.lang.Object) (newsaturation) ), ((java.lang.Object) (((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) )) )});
		//line 126 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((haxe.root.Array<java.lang.Object>) (this2) );
	}
	
	
	public static java.lang.String toString(haxe.root.Array<java.lang.Object> this1)
	{
		//line 129 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ( ( ( ( ( ( "hsv(" + haxe.lang.Runtime.toString(((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(0))) )) ) + "," ) + haxe.lang.Runtime.toString(( ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(1))) ) * 100 )) ) + "%," ) + haxe.lang.Runtime.toString(( ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) ) * 100 )) ) + "%)" );
	}
	
	
	public static boolean equals(haxe.root.Array<java.lang.Object> this1, haxe.root.Array<java.lang.Object> other)
	{
		//line 132 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Hsv.Hsv_Impl_.nearEquals(this1, other, null);
	}
	
	
	public static boolean nearEquals(haxe.root.Array<java.lang.Object> this1, haxe.root.Array<java.lang.Object> other, java.lang.Object tolerance)
	{
		//line 135 "/HXvariability/color/src/thx/color/Hsv.hx"
		java.lang.Object __temp_tolerance127 = ( (haxe.lang.Runtime.eq(tolerance, null)) ? (((java.lang.Object) (1e-9) )) : (tolerance) );
		//line 135 "/HXvariability/color/src/thx/color/Hsv.hx"
		if (( ( haxe.lang.Runtime.compare(java.lang.Math.abs(thx.Floats.angleDifference(((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(0))) ), ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (other) ).__get(0))) ), 360.0)), __temp_tolerance127) <= 0 ) && thx.Floats.nearEquals(((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(1))) ), ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (other) ).__get(1))) ), __temp_tolerance127) )) 
		{
			//line 135 "/HXvariability/color/src/thx/color/Hsv.hx"
			return thx.Floats.nearEquals(((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) ), ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (other) ).__get(2))) ), __temp_tolerance127);
		}
		else
		{
			//line 135 "/HXvariability/color/src/thx/color/Hsv.hx"
			return false;
		}
		
	}
	
	
	public static haxe.root.Array<java.lang.Object> toLab(haxe.root.Array<java.lang.Object> this1)
	{
		//line 138 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Xyz.Xyz_Impl_.toLab(thx.color._Hsv.Hsv_Impl_.toXyz(this1));
	}
	
	
	public static haxe.root.Array<java.lang.Object> toLCh(haxe.root.Array<java.lang.Object> this1)
	{
		//line 141 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Lab.Lab_Impl_.toLCh(thx.color._Hsv.Hsv_Impl_.toLab(this1));
	}
	
	
	public static haxe.root.Array<java.lang.Object> toLuv(haxe.root.Array<java.lang.Object> this1)
	{
		//line 144 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Rgbx.Rgbx_Impl_.toLuv(thx.color._Hsv.Hsv_Impl_.toRgbx(this1));
	}
	
	
	public static haxe.root.Array<java.lang.Object> toCmy(haxe.root.Array<java.lang.Object> this1)
	{
		//line 147 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Rgbx.Rgbx_Impl_.toCmy(thx.color._Hsv.Hsv_Impl_.toRgbx(this1));
	}
	
	
	public static haxe.root.Array<java.lang.Object> toCmyk(haxe.root.Array<java.lang.Object> this1)
	{
		//line 150 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Rgbx.Rgbx_Impl_.toCmyk(thx.color._Hsv.Hsv_Impl_.toRgbx(this1));
	}
	
	
	public static haxe.root.Array<java.lang.Object> toCubeHelix(haxe.root.Array<java.lang.Object> this1)
	{
		//line 153 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Rgbx.Rgbx_Impl_.toCubeHelixWithGamma(((haxe.root.Array<java.lang.Object>) (thx.color._Hsv.Hsv_Impl_.toRgbx(this1)) ), ((double) (1) ));
	}
	
	
	public static double toGrey(haxe.root.Array<java.lang.Object> this1)
	{
		//line 156 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Rgbx.Rgbx_Impl_.toGrey(thx.color._Hsv.Hsv_Impl_.toRgbx(this1));
	}
	
	
	public static haxe.root.Array<java.lang.Object> toHsl(haxe.root.Array<java.lang.Object> this1)
	{
		//line 159 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Rgbx.Rgbx_Impl_.toHsl(thx.color._Hsv.Hsv_Impl_.toRgbx(this1));
	}
	
	
	public static haxe.root.Array<java.lang.Object> toHsva(haxe.root.Array<java.lang.Object> this1)
	{
		//line 162 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Hsv.Hsv_Impl_.withAlpha(this1, 1.0);
	}
	
	
	public static haxe.root.Array<java.lang.Object> toHunterLab(haxe.root.Array<java.lang.Object> this1)
	{
		//line 165 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Xyz.Xyz_Impl_.toHunterLab(thx.color._Hsv.Hsv_Impl_.toXyz(this1));
	}
	
	
	public static int toRgb(haxe.root.Array<java.lang.Object> this1)
	{
		//line 168 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Rgbx.Rgbx_Impl_.toRgb(thx.color._Hsv.Hsv_Impl_.toRgbx(this1));
	}
	
	
	public static int toRgba(haxe.root.Array<java.lang.Object> this1)
	{
		//line 171 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Rgbxa.Rgbxa_Impl_.toRgba(thx.color._Hsv.Hsv_Impl_.toRgbxa(this1));
	}
	
	
	public static haxe.root.Array<java.lang.Object> toRgbx(haxe.root.Array<java.lang.Object> this1)
	{
		//line 174 "/HXvariability/color/src/thx/color/Hsv.hx"
		if (( ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(1))) ) == 0 )) 
		{
			//line 175 "/HXvariability/color/src/thx/color/Hsv.hx"
			haxe.root.Array<java.lang.Object> this2 = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) )) ), ((java.lang.Object) (((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) )) ), ((java.lang.Object) (((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) )) )});
			//line 175 "/HXvariability/color/src/thx/color/Hsv.hx"
			return ((haxe.root.Array<java.lang.Object>) (this2) );
		}
		
		//line 177 "/HXvariability/color/src/thx/color/Hsv.hx"
		double r = 0.0;
		//line 177 "/HXvariability/color/src/thx/color/Hsv.hx"
		double g = 0.0;
		//line 177 "/HXvariability/color/src/thx/color/Hsv.hx"
		double b = 0.0;
		//line 177 "/HXvariability/color/src/thx/color/Hsv.hx"
		int i = 0;
		//line 177 "/HXvariability/color/src/thx/color/Hsv.hx"
		double f = 0.0;
		//line 177 "/HXvariability/color/src/thx/color/Hsv.hx"
		double p = 0.0;
		//line 177 "/HXvariability/color/src/thx/color/Hsv.hx"
		double q = 0.0;
		//line 177 "/HXvariability/color/src/thx/color/Hsv.hx"
		double t = 0.0;
		//line 178 "/HXvariability/color/src/thx/color/Hsv.hx"
		double h = ( ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(0))) ) / 60 );
		//line 180 "/HXvariability/color/src/thx/color/Hsv.hx"
		i = ((int) (java.lang.Math.floor(h)) );
		//line 181 "/HXvariability/color/src/thx/color/Hsv.hx"
		f = ( h - i );
		//line 182 "/HXvariability/color/src/thx/color/Hsv.hx"
		p = ( ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) ) * (( 1 - ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(1))) ) )) );
		//line 183 "/HXvariability/color/src/thx/color/Hsv.hx"
		q = ( ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) ) * (( 1 - ( f * ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(1))) ) ) )) );
		//line 184 "/HXvariability/color/src/thx/color/Hsv.hx"
		t = ( ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) ) * (( 1 - ( (( 1 - f )) * ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(1))) ) ) )) );
		//line 186 "/HXvariability/color/src/thx/color/Hsv.hx"
		switch (i)
		{
			case 0:
			{
				//line 187 "/HXvariability/color/src/thx/color/Hsv.hx"
				r = ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) );
				//line 187 "/HXvariability/color/src/thx/color/Hsv.hx"
				g = t;
				//line 187 "/HXvariability/color/src/thx/color/Hsv.hx"
				b = p;
				//line 187 "/HXvariability/color/src/thx/color/Hsv.hx"
				break;
			}
			
			
			case 1:
			{
				//line 188 "/HXvariability/color/src/thx/color/Hsv.hx"
				r = q;
				//line 188 "/HXvariability/color/src/thx/color/Hsv.hx"
				g = ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) );
				//line 188 "/HXvariability/color/src/thx/color/Hsv.hx"
				b = p;
				//line 188 "/HXvariability/color/src/thx/color/Hsv.hx"
				break;
			}
			
			
			case 2:
			{
				//line 189 "/HXvariability/color/src/thx/color/Hsv.hx"
				r = p;
				//line 189 "/HXvariability/color/src/thx/color/Hsv.hx"
				g = ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) );
				//line 189 "/HXvariability/color/src/thx/color/Hsv.hx"
				b = t;
				//line 189 "/HXvariability/color/src/thx/color/Hsv.hx"
				break;
			}
			
			
			case 3:
			{
				//line 190 "/HXvariability/color/src/thx/color/Hsv.hx"
				r = p;
				//line 190 "/HXvariability/color/src/thx/color/Hsv.hx"
				g = q;
				//line 190 "/HXvariability/color/src/thx/color/Hsv.hx"
				b = ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) );
				//line 190 "/HXvariability/color/src/thx/color/Hsv.hx"
				break;
			}
			
			
			case 4:
			{
				//line 191 "/HXvariability/color/src/thx/color/Hsv.hx"
				r = t;
				//line 191 "/HXvariability/color/src/thx/color/Hsv.hx"
				g = p;
				//line 191 "/HXvariability/color/src/thx/color/Hsv.hx"
				b = ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) );
				//line 191 "/HXvariability/color/src/thx/color/Hsv.hx"
				break;
			}
			
			
			default:
			{
				//line 192 "/HXvariability/color/src/thx/color/Hsv.hx"
				r = ((double) (haxe.lang.Runtime.toDouble(((haxe.root.Array<java.lang.Object>) (this1) ).__get(2))) );
				//line 192 "/HXvariability/color/src/thx/color/Hsv.hx"
				g = p;
				//line 192 "/HXvariability/color/src/thx/color/Hsv.hx"
				b = q;
				//line 192 "/HXvariability/color/src/thx/color/Hsv.hx"
				break;
			}
			
		}
		
		//line 195 "/HXvariability/color/src/thx/color/Hsv.hx"
		haxe.root.Array<java.lang.Object> this3 = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (r) ), ((java.lang.Object) (g) ), ((java.lang.Object) (b) )});
		//line 195 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((haxe.root.Array<java.lang.Object>) (this3) );
	}
	
	
	public static haxe.root.Array<java.lang.Object> toRgbxa(haxe.root.Array<java.lang.Object> this1)
	{
		//line 199 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Rgbx.Rgbx_Impl_.toRgbxa(thx.color._Hsv.Hsv_Impl_.toRgbx(this1));
	}
	
	
	public static double toTemperature(haxe.root.Array<java.lang.Object> this1)
	{
		//line 202 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Rgbx.Rgbx_Impl_.toTemperature(thx.color._Hsv.Hsv_Impl_.toRgbx(this1));
	}
	
	
	public static haxe.root.Array<java.lang.Object> toXyz(haxe.root.Array<java.lang.Object> this1)
	{
		//line 205 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Rgbx.Rgbx_Impl_.toXyz(thx.color._Hsv.Hsv_Impl_.toRgbx(this1));
	}
	
	
	public static haxe.root.Array<java.lang.Object> toYuv(haxe.root.Array<java.lang.Object> this1)
	{
		//line 208 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Rgbx.Rgbx_Impl_.toYuv(thx.color._Hsv.Hsv_Impl_.toRgbx(this1));
	}
	
	
	public static haxe.root.Array<java.lang.Object> toYxy(haxe.root.Array<java.lang.Object> this1)
	{
		//line 211 "/HXvariability/color/src/thx/color/Hsv.hx"
		return thx.color._Rgbx.Rgbx_Impl_.toYxy(thx.color._Hsv.Hsv_Impl_.toRgbx(this1));
	}
	
	
	public static double get_hue(haxe.root.Array<java.lang.Object> this1)
	{
		//line 214 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((double) (haxe.lang.Runtime.toDouble(this1.__get(0))) );
	}
	
	
	public static double get_saturation(haxe.root.Array<java.lang.Object> this1)
	{
		//line 216 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((double) (haxe.lang.Runtime.toDouble(this1.__get(1))) );
	}
	
	
	public static double get_value(haxe.root.Array<java.lang.Object> this1)
	{
		//line 218 "/HXvariability/color/src/thx/color/Hsv.hx"
		return ((double) (haxe.lang.Runtime.toDouble(this1.__get(2))) );
	}
	
	
}


