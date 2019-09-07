<?php
    function bio_data()
    {
        $bio_data = [
            "name" => "Mega Tri Hartono",
            "age" => 22,
            "address" => "Jl. Alle Raya, Tangerang Selatan",
            "hobbies" => [
                "Main Games", "Menonton Film"
            ],
            "is_married" => false,
            "list_school" => [[
                "name" => "SMAN 87 Jakarta",
				"year_in" => 2012,
                "year_out" => 2015,
                "major" => "IPA"
            ],
			[
                "name" => "Universitas Indonesia",
				"year_in" => 2015,
                "year_out" => 2019,
                "major" => "Teknik Mesin"
            ]],
            "skills" => [[
                "skill_name" => "C++",
                "level" => "beginner"
            ],
			[
                "skill_name" => "C#",
                "level" => "beginner"
            ]],
            "interest_in_coding" => true,
        ];
        $json_data = json_encode($bio_data);
        return $json_data;
    }
echo bio_data();