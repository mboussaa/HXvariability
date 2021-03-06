// Generated by Haxe 3.3.0

#pragma warning disable 109, 114, 219, 429, 168, 162
public class Date : global::haxe.lang.HxObject {
	
	public Date(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public Date(global::System.DateTime native) {
		global::Date.__hx_ctor__Date(((global::Date) (this) ), ((global::System.DateTime) (native) ));
	}
	
	
	public Date(int year, int month, int day, int hour, int min, int sec) {
		global::Date.__hx_ctor__Date(((global::Date) (this) ), ((int) (year) ), ((int) (month) ), ((int) (day) ), ((int) (hour) ), ((int) (min) ), ((int) (sec) ));
	}
	
	
	public static void __hx_ctor__Date(global::Date __temp_me9, global::System.DateTime native) {
		__temp_me9.date = native;
	}
	
	
	public static void __hx_ctor__Date(global::Date __temp_me8, int year, int month, int day, int hour, int min, int sec) {
		unchecked {
			if (( day <= 0 )) {
				day = 1;
			}
			
			if (( year <= 0 )) {
				year = 1;
			}
			
			__temp_me8.date = new global::System.DateTime(year, ( month + 1 ), day, hour, min, sec);
		}
	}
	
	
	public static readonly long epochTicks = new global::System.DateTime(1970, 1, 1).Ticks;
	
	public static global::Date now() {
		return new global::Date(((global::System.DateTime) (global::System.DateTime.Now) ));
	}
	
	
	public static global::Date fromTime(double t) {
		return new global::Date(((global::System.DateTime) (global::System.TimeZone.CurrentTimeZone.ToLocalTime(((global::System.DateTime) (new global::System.DateTime(((long) (( ((long) (( t * ((double) (global::System.TimeSpan.TicksPerMillisecond) ) )) ) + ((long) (global::Date.epochTicks) ) )) ))) ))) ));
	}
	
	
	public static global::Date fromString(string s) {
		unchecked {
			switch (s.Length) {
				case 8:
				{
					global::Array<object> k = global::haxe.lang.StringExt.split(s, ":");
					return new global::Date(1, 1, 1, (global::Std.parseInt(global::haxe.lang.Runtime.toString(k[0]))).@value, (global::Std.parseInt(global::haxe.lang.Runtime.toString(k[1]))).@value, (global::Std.parseInt(global::haxe.lang.Runtime.toString(k[2]))).@value);
				}
				
				
				case 10:
				{
					global::Array<object> k1 = global::haxe.lang.StringExt.split(s, "-");
					return new global::Date((global::Std.parseInt(global::haxe.lang.Runtime.toString(k1[0]))).@value, ( (global::Std.parseInt(global::haxe.lang.Runtime.toString(k1[1]))).@value - 1 ), (global::Std.parseInt(global::haxe.lang.Runtime.toString(k1[2]))).@value, 0, 0, 0);
				}
				
				
				case 19:
				{
					global::Array<object> k2 = global::haxe.lang.StringExt.split(s, " ");
					global::Array<object> y = global::haxe.lang.StringExt.split(global::haxe.lang.Runtime.toString(k2[0]), "-");
					global::Array<object> t = global::haxe.lang.StringExt.split(global::haxe.lang.Runtime.toString(k2[1]), ":");
					return new global::Date((global::Std.parseInt(global::haxe.lang.Runtime.toString(y[0]))).@value, ( (global::Std.parseInt(global::haxe.lang.Runtime.toString(y[1]))).@value - 1 ), (global::Std.parseInt(global::haxe.lang.Runtime.toString(y[2]))).@value, (global::Std.parseInt(global::haxe.lang.Runtime.toString(t[0]))).@value, (global::Std.parseInt(global::haxe.lang.Runtime.toString(t[1]))).@value, (global::Std.parseInt(global::haxe.lang.Runtime.toString(t[2]))).@value);
				}
				
				
				default:
				{
					throw global::haxe.lang.HaxeException.wrap(global::haxe.lang.Runtime.concat("Invalid date format : ", s));
				}
				
			}
			
		}
	}
	
	
	public static global::Date fromNative(global::System.DateTime d) {
		return new global::Date(((global::System.DateTime) (d) ));
	}
	
	
	public static new object __hx_createEmpty() {
		return new global::Date(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static new object __hx_create(global::Array arr) {
		unchecked {
			return new global::Date(((int) (global::haxe.lang.Runtime.toInt(arr[0])) ), ((int) (global::haxe.lang.Runtime.toInt(arr[1])) ), ((int) (global::haxe.lang.Runtime.toInt(arr[2])) ), ((int) (global::haxe.lang.Runtime.toInt(arr[3])) ), ((int) (global::haxe.lang.Runtime.toInt(arr[4])) ), ((int) (global::haxe.lang.Runtime.toInt(arr[5])) ));
		}
	}
	
	
	public global::System.DateTime date;
	
	public double getTime() {
		return ( ((double) (((long) (( ((long) (global::System.TimeZone.CurrentTimeZone.ToUniversalTime(((global::System.DateTime) (this.date) )).Ticks) ) - ((long) (global::Date.epochTicks) ) )) )) ) / ((double) (global::System.TimeSpan.TicksPerMillisecond) ) );
	}
	
	
	public int getHours() {
		return this.date.Hour;
	}
	
	
	public int getMinutes() {
		return this.date.Minute;
	}
	
	
	public int getSeconds() {
		return this.date.Second;
	}
	
	
	public int getFullYear() {
		return this.date.Year;
	}
	
	
	public int getMonth() {
		unchecked {
			return ( this.date.Month - 1 );
		}
	}
	
	
	public int getDate() {
		return this.date.Day;
	}
	
	
	public int getDay() {
		return ((int) (global::haxe.lang.Runtime.toInt(((object) (this.date.DayOfWeek) ))) );
	}
	
	
	public virtual string toString() {
		unchecked {
			int m = ( ( this.date.Month - 1 ) + 1 );
			int d = this.date.Day;
			int h = this.date.Hour;
			int mi = this.date.Minute;
			int s = this.date.Second;
			return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.toString(this.date.Year), "-"), (( (( m < 10 )) ? (global::haxe.lang.Runtime.concat("0", global::haxe.lang.Runtime.toString(m))) : (global::haxe.lang.Runtime.concat("", global::haxe.lang.Runtime.toString(m))) ))), "-"), (( (( d < 10 )) ? (global::haxe.lang.Runtime.concat("0", global::haxe.lang.Runtime.toString(d))) : (global::haxe.lang.Runtime.concat("", global::haxe.lang.Runtime.toString(d))) ))), " "), (( (( h < 10 )) ? (global::haxe.lang.Runtime.concat("0", global::haxe.lang.Runtime.toString(h))) : (global::haxe.lang.Runtime.concat("", global::haxe.lang.Runtime.toString(h))) ))), ":"), (( (( mi < 10 )) ? (global::haxe.lang.Runtime.concat("0", global::haxe.lang.Runtime.toString(mi))) : (global::haxe.lang.Runtime.concat("", global::haxe.lang.Runtime.toString(mi))) ))), ":"), (( (( s < 10 )) ? (global::haxe.lang.Runtime.concat("0", global::haxe.lang.Runtime.toString(s))) : (global::haxe.lang.Runtime.concat("", global::haxe.lang.Runtime.toString(s))) )));
		}
	}
	
	
	public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
		unchecked {
			switch (hash) {
				case 1113806382:
				{
					this.date = ((global::System.DateTime) (@value) );
					return @value;
				}
				
				
				default:
				{
					return base.__hx_setField(field, hash, @value, handleProperties);
				}
				
			}
			
		}
	}
	
	
	public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
		unchecked {
			switch (hash) {
				case 946786476:
				{
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "toString", 946786476)) );
				}
				
				
				case 589000550:
				{
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getDay", 589000550)) );
				}
				
				
				case 350619108:
				{
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getDate", 350619108)) );
				}
				
				
				case 1815533258:
				{
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getMonth", 1815533258)) );
				}
				
				
				case 172955042:
				{
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getFullYear", 172955042)) );
				}
				
				
				case 703544457:
				{
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getSeconds", 703544457)) );
				}
				
				
				case 591404329:
				{
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getMinutes", 591404329)) );
				}
				
				
				case 188431961:
				{
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getHours", 188431961)) );
				}
				
				
				case 528448451:
				{
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getTime", 528448451)) );
				}
				
				
				case 1113806382:
				{
					return this.date;
				}
				
				
				default:
				{
					return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
				}
				
			}
			
		}
	}
	
	
	public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
		unchecked {
			switch (hash) {
				case 946786476:
				{
					return this.toString();
				}
				
				
				case 589000550:
				{
					return this.getDay();
				}
				
				
				case 350619108:
				{
					return this.getDate();
				}
				
				
				case 1815533258:
				{
					return this.getMonth();
				}
				
				
				case 172955042:
				{
					return this.getFullYear();
				}
				
				
				case 703544457:
				{
					return this.getSeconds();
				}
				
				
				case 591404329:
				{
					return this.getMinutes();
				}
				
				
				case 188431961:
				{
					return this.getHours();
				}
				
				
				case 528448451:
				{
					return this.getTime();
				}
				
				
				default:
				{
					return base.__hx_invokeField(field, hash, dynargs);
				}
				
			}
			
		}
	}
	
	
	public override void __hx_getFields(global::Array<object> baseArr) {
		baseArr.push("date");
		{
			base.__hx_getFields(baseArr);
		}
		
	}
	
	
	public override string ToString(){
		return this.toString();
	}
	
	
}


