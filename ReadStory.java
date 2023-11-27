package com.example.storyreadingapp;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.AsyncTask;
import android.os.Bundle;
import android.speech.tts.TextToSpeech;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

//import com.google.api.services.translate.Translate;
import com.google.cloud.translate.Translation;
//import com.google.api.services.translate.Translate;
import com.google.cloud.translate.TranslateOptions;
import com.google.cloud.translate.Translation;

//import com.google.cloud.translate.Translate;
import com.google.cloud.translate.Translate;
import com.google.cloud.translate.TranslateOptions;
import com.google.cloud.translate.Translation;

import java.util.Locale;

public class ReadStory extends AppCompatActivity {

    private TextToSpeech tts;
    private Button ibSpeak;
    private EditText txtS;
    private TextView resultText;
    private Button btnTrns;
    private String apiKey = "AIzaSyDDVNgtGnPe1J2X4AOObSdeXIXUe2QCUEI";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_read_story);

        Button btnback = findViewById(R.id.btnBack);
        Button smap = findViewById(R.id.sMap);
        TextView txtT = findViewById(R.id.txtTitle);
        ImageView imgT = findViewById(R.id.imgTitle);
        TextView txtS = findViewById(R.id.txtStory);


        Bundle extras = getIntent().getExtras();
        String story = "Default Story Text";


        if (extras != null) {
            story = extras.getString("keyStory");

            if (story.equals("storyA")) {
                txtT.setText("Snow White and the Seven Dwarves");
                imgT.setImageResource(R.drawable.snow);
                txtS.setText("Once upon a time, long, long ago a king and queen ruled over a distant land.  The queen was kind and lovely and all the people of the realm adored her.  The only sadness in the queen's life was that she wished for a child but did not have one.One winter day, the queen was doing needle work while gazing out her ebony window at the new fallen snow.  A bird flew by the window startling the queen and she pricked her finger.  A single drop of blood fell on the snow outside her window.  As she looked at the blood on the snow she said to herself, Oh, how I wish that I had a daughter that had skin as white as snow, lips as red as blood, and hair as black as ebony Soon after that, the kind queen got her wish when she gave birth to a baby girl who had skin white as snow, lips red as blood, and hair black as ebony.  They named the baby princess Snow White, but sadly, the queen died after giving birth to Snow White. Soon after, the king married a new woman who was beautiful, but as well proud and cruel.  She had studied dark magic and owned a magic mirror, of which she would daily ask, Mirror, mirror on the wall, who's the fairest of them all? Each time this question was asked, the mirror would give the same answer, Thou, O Queen, art the fairest of all.  This pleased the queen greatly as she knew that her magical mirror could speak nothing but the truth. One morning when the queen asked, Mirror, mirror on the wall, who's the fairest of them all? she was shocked when it answered: You, my queen, are fair; it is true But Snow White is even fairer than you. The Queen flew into a jealous rage and ordered her huntsman to take Snow White into the woods to be killed.  She demanded that the huntsman return with Snow White's heart as proof. The poor huntsman took Snow White into the forest, but found himself unable to kill the girl.  Instead, he let her go, and brought the queen the heart of a wild boar. Snow White was now all alone in the great forest, and she did not know what to do.  The trees seemed to whisper to each other, scaring Snow White who began to run.  She ran over sharp stones and through thorns.  She ran as far as her feet could carry her, and just as evening was about to fall she saw a little house and went inside in order to rest. Inside the house everything was small but tidy.  There was a little table with a tidy, white tablecloth and seven little plates.  Against the wall there were seven little beds, all in a row and covered with quilts. Because she was so hungry Snow White ate a few vegetables and a little bread from each little plate and from each cup she drank a bit of milk. Afterward, because she was so tired, she lay down on one of the little beds and fell fast asleep. After dark, the owners of the house returned home.  They were the seven dwarves who mined for gold in the mountains.  As soon as they arrived home, they saw that someone had been there -- for not everything was in the same order as they had left it. The first one said, 'Who has been sitting in my chair?' The second one, 'Who has been eating from my plate?' The third one, 'Who has been eating my bread?' The fourth one, 'Who has been eating my vegetables?' The fifth one, 'Who has been eating with my fork?' The sixth one, Who has been drinking from my cup?");
            } else if (story.equals("storyB")) {
                txtT.setText("Frozen Story");
                imgT.setImageResource(R.drawable.elsa);
                txtS.setText("Princess Elsa and Princess Anna of Arendelle were best friends when they were tiny girls. Elsa had the power to create snow and ice, and Anna was one of the few individuals who knew about it.\n" +
                        "\n" +
                        "\n" +
                        "Elsa flooded an empty ballroom with snow one night to allow the sisters to play together. Elsa lost control during the game and inadvertently struck Anna with a blast of cold power. Anna was seriously injured. Her parents sought assistance from the old mountain trolls. Anna may be rescued, according to a wise old troll, because she had been hit in the head rather than the heart. Anna forgot about that night as the years passed.\n" +
                        "\n" +
                        "\n" +
                        "To keep Elsa's talent a secret from the rest of the world, their parents built walls around the castle and never allowed anybody inside. When Elsa felt strong sentiments, though, the magic would flood out. Elsa decided to stop playing with Anna since she didn't want to injure her sister again. Anna felt terribly lonely as a result of this. The sisters didn't spend any time together after their parents went missing in a stormy sea. Years later, Elsa was ready to ascend to the throne of Arendelle. The castle gates were only unlocked on that day. The coronation event drew hundreds of people. Elsa tried hard to conceal her emotions and abilities.\n" +
                        "\n" +
                        "\n" +
                        "Anna danced with gorgeous Prince Hans from the Southern Isles at the banquet. He made her heart skip a beat. They chose to marry since they seemed to have everything in common. Elsa believed it was a poor idea for them to get married. Anna became enraged and began to argue. Elsa began to lose control, and ice began to shoot from her hands as she screamed. Everyone was taken aback by Elsa's appearance. Elsa's secret was now known to everyone in Arendelle. She became frantic and escaped to the mountains.\n" +
                        "\n" +
                        "\n" +
                        "Anna was in a bad mood. Elsa's abilities had unleashed a devastating winter storm in the midst of summer. She flew after Elsa, leaving Hans in command of the country. Anna's horse pushed her into the snow and bolted back to Arendelle as she galloped into the furious storm. Fortunately, she met Kristoff, an ice harvester, and Sven, his reindeer. They went out to find Elsa together. Anna and Kristoff encountered a stunning snow wonderland as they climbed the mountain. They came across Olaf, an enchanted snowman. Olaf was aware of Elsa's whereabouts and desired to assist them in resurrecting summer.");
            } else if (story.equals("storyC")) {
                txtT.setText("Raya and the Last Dragon");
                imgT.setImageResource(R.drawable.raya);
                txtS.setText("Raya and the Last Dragon is an American animated film produced at Walt Disney Animation Studios and distributed by Walt Disney Studios Motion Pictures. It was released on March 5, 2021 and is the 59th animated feature in the Disney Animated Canon.[1]\n" +
                        "The film follows Raya, a warrior princess who must find the fabled last dragon in order to save her divided home world from a ravenous plague. Throughout her journey, Raya traverses the various kingdoms of Kumandra, with an unusual band of misfits by her side. All the while, they must evade the clutches of Raya’s longtime nemesis, Namaari. The setting of Raya and the Last Dragon takes inspiration from Southeast Asian cultures and regions. The titular dragon, Sisu, is modeled after the Nāga, a serpentine race found in Hinduism, Buddhism, and Jainism.[2] To respectfully pay tribute to the region, the studio established a Southeast Asia Story Trust—a coalition of specialists of various fields, including visual anthropology, linguistics, botany, choreography, architecture, and martial arts.[3]\n" +
                        "\n" +
                        "Raya and the Last Dragon was released to widespread critical acclaim, with praise directed towards its visuals, characters, world-building, and voice acting.");

            } else if (story.equals("storyD")) {
                txtT.setText("Pinocchio Short Story");
                imgT.setImageResource(R.drawable.pinocchio);
                txtS.setText("Once upon a time, in a small village, a craftsman named Geppetto decided to make a fine toy. He searched for a long time to get a good piece of wood. He then found a piece of pinewood, he examined the wood and started to carve it. After working for several hours Geppetto carved a beautiful puppet boy. Geppetto started cleaning the puppet as he was cleaning the puppet he heard a strange voice and found that it was the voice of the puppet. The toymaker named the wooden puppet Pinocchio.\n" +
                        "\n" +
                        "\nAs time passed, Pinocchio and the toymaker started enjoying each other’s company and grew fond of each other. Pinocchio wanted to go to school but the toymaker did not have enough money. So he decided to sell his coat for some money. He then gave the money to Pinocchio to buy stationary and warned him not to wander around.\n" +
                        "\n" +
                        "Pinocchio decided to go to school and as he went to the school he saw a circus. He went to see the circus and there was a huge crowd of people. Soon he found himself locked in a cell. He started crying and soon a fairy came and released him from the cell, and warned him not to repeat the same mistake.\n" +
                        " \n" +
                        "\n" +
                        "Pinocchio started travelling to the school the next day. He was on his way to the school as he was crossing the forest he met a fox and a cat. When the cunning fox and his buddy cat saw Pinocchio carrying money, they stopped him and inquired where he was headed. Pinocchio said that he was going to acquire some school supplies. \n" +
                        "\n" +
                        "Listening to this fox said that with the money Pinocchio had he would not be able to buy the goods. The fox further suggested giving the money to the fox and he would plant it in a magical forest where the money would grow. Little Pinocchio believed the fox. As time passed by he did not find the money and started crying. \n" +
                        "\n" +
                        "Hearing the cries of the puppet boy the fairy appeared and asked what happened to the money. Pinocchio made some excuses and lied, and as he continued lying, his nose grew larger and larger. Soon the fairy realised that he was lying. \n" +
                        "\n" +
                        "The fairy asked, “Are you telling the truth?” “Sorry, I was afraid of being scolded,'' he replied. The fairy once again saved him and returned the money.");

            } else if (story.equals("storyE")) {
                txtT.setText("Maleficent backstory");
                imgT.setImageResource(R.drawable.male);
                txtS.setText("Maleficent was born in an enchanted forest kingdom known as the Moors, bordering the human kingdom. Her parents were killed by humans, leaving her as an orphan. One day, Maleficent is lying on a tree branch happily playing with dolls using her powers, she hears a noise and sees a branch on the tree has snapped, goes over to it, wraps her hands around it to magically fix it, after she spreads her large wings and takes flight across the land, greeting the other creatures she comes across.\n" +
                        "\n" +
                        "Maleficent comes across three pixies, Knotgrass, Flittle, and Thistlewit having a meeting. They tell her that a human peasant boy has been discovered in the Moors. Maleficent immediately leaves to investigate, knocking back the three pixies. She finds that the Tree Warriors have cornered the boy in an alcove, and demands that he come out of hiding. Reluctantly, he comes out and introduces himself as Stefan, Maleficent orders him to hand over the gem he had stolen from the kingdom. He surrenders the gem and Maleficent tosses it into the water.\n" +
                        "\n" +
                        "Maleficent escorts Stefan to the border of the Moors, where they discover that they are both orphans. Stefan wishes to return to the Moors to see Maleficent again, but she tells him that it is forbidden. Nonetheless, they both want to see each other again but when Stefan extends his hand to her and as she goes to shake it she gets a shock from his ring, she tells him that iron burns fairies and he takes off his ring and throws it away. Stefan is leaving and Maleficent smiles to herself and she begins to develop feelings for Stefan and a few weeks later, Stefan returns to see Maleficent and the two develop a close friendship, which as they grow older, develops into romance.");

            }
        }

        smap.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent ca = new Intent(getApplicationContext(), MapsActivity.class);
                startActivity(ca);
            }
        });
        txtS = findViewById(R.id.txtStory);
        ibSpeak = findViewById(R.id.ibSpeak);

        tts = new TextToSpeech(getApplicationContext(), new TextToSpeech.OnInitListener() {
            @Override
            public void onInit(int i) {
                if (i == TextToSpeech.SUCCESS) {
                    int result = tts.setLanguage(Locale.US);
                    if (result == TextToSpeech.LANG_MISSING_DATA
                            || result == TextToSpeech.LANG_NOT_SUPPORTED) {
                        Toast.makeText(getApplicationContext(), "This language is not supported.", Toast.LENGTH_SHORT).show();
                    }
                } else {
                    Toast.makeText(getApplicationContext(), "TTS Initialization failed", Toast.LENGTH_SHORT).show();
                }
            }
        });
        final TextView finalTxtS = txtS;
        ibSpeak.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String input = finalTxtS.getText().toString().trim();
                int result = tts.speak(input, TextToSpeech.QUEUE_FLUSH, null);
                if (result == TextToSpeech.ERROR) {
                    Toast.makeText(getApplicationContext(),
                            "Error in converting Text to Speech", Toast.LENGTH_SHORT).show();
                }
            }
        });

        btnback.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent ca = new Intent(getApplicationContext(), MainActivity.class);
                startActivity(ca);
            }
        });
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        if (tts != null) {
            tts.stop();
            tts.shutdown();
        }

         txtS = findViewById(R.id.txtStory);
         resultText = findViewById(R.id.textViewTranslated);
         Button translateButton = findViewById(R.id.btnTrns);
        String apiKey = "AIzaSyDDVNgtGnPe1J2X4AOObSdeXIXUe2QCUEI";
        //btnTrns = findViewById(R.id.btnTrns);
         translateButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                // Get the text to be translated
                String textToTranslate = txtS.getText().toString();

                // Translate the text in the background
                new TranslateTask().execute(textToTranslate);
            }
        });
    }

    private class TranslateTask extends AsyncTask<String, Void, String> {
        @Override
        protected String doInBackground(String... params) {
            // Get your API key from the Google Cloud Console
            String apiKey = "AIzaSyDDVNgtGnPe1J2X4AOObSdeXIXUe2QCUEI";

            // Create the translation client
//            Translate translate = (Translate) TranslateOptions.newBuilder().setApiKey(apiKey).build().getService();
            Translate translate = TranslateOptions.newBuilder().setApiKey(apiKey).build().getService();

            // Translate the text
            Translation translation = translate.translate(params[0]);
            return translation.getTranslatedText();
              }

            @Override
            protected void onPostExecute (String result){
                // Display the translated text in the same TextView
                resultText.setText(result);
            }

        }
}