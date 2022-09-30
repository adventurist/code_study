import java.util.*;
import java.io.*;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLEncoder;


class Requestor {
  public static boolean http_code_is_valid(int code)
  {
    HashMap<Integer, String> map = new HashMap<Integer, String>();
    JSONObject json_object = new JSONObject();
    return (code < 400);
  }

  public String get_query_param_string()
  {
    final String charset = "UTF-8";
    String       query   = "";
    try
    {
      query = String.format("?count=%s", URLEncoder.encode("1", charset));
    }
    catch (UnsupportedEncodingException exception)
    {
      System.err.println(exception.getMessage());
    }

    return query;
  }

  public String do_request()
  {
    try
    {
      URL               url = new URL("http://shibe.online/api/shibes" + get_query_param_string());
      HttpURLConnection con = (HttpURLConnection)url.openConnection();

      con.setRequestMethod("GET");
      con.setRequestProperty("Content-Type", "application/json");
      con.setRequestProperty("APIKEY", "this_is_my_key");

      con.connect();

      if (http_code_is_valid(con.getResponseCode()))
      {
        InputStream    stream = con.getInputStream();
        BufferedReader reader = new BufferedReader(new InputStreamReader(stream));
        StringBuilder  bldr   = new StringBuilder();
        String         line;

        while ((line = reader.readLine()) != null)
          bldr.append(line);

        return bldr.toString();
      }
    }
    catch (MalformedURLException e)
    {
      System.err.println(e.getMessage());
    }
    catch (IOException e)
    {
      System.err.println(e.getMessage());
    }

    return "NO RESPONSE!";
  }

  public static void main (String[] args)
  {
    Requestor requestor = new Requestor();
    String    json_s    = requestor.do_request();
    System.out.print(json_s);
  }
}