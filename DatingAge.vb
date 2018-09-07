Module Module1

    Sub Main()
        Console.WriteLine("hello please enter your age: ")
        Dim localAge = Console.ReadLine()

        Dim lowestAcceptableAge As double = localAge / 2 + 7
        Dim maxAcceptableAge As double = (localAge - 7) * 2

        If localAge > 12 Then
                Console.WriteLine("the socially acceptable age range you can date in is: {0} to {1}", Math.Floor(lowestAcceptableAge), Math.Floor(maxAcceptableAge))
            Else
                Console.WriteLine("you should not be dating buddy...")
        End If
    End Sub

End Module
