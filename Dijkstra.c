#include <stdio.h>
#define NDEBUG
#include <assert.h>


function cam_custo = caminho_custo(no_inicial, no_final, custos, precedentes)
    
  
  if(no_inicial == no_final)
      cam_custo = {};
      cam_custo{1} = 0;
      cam_custo{2} = [no_inicial];
      return
  
  end

  
  custo = 0;
  caminho = [];
  for i = 1:size(precedentes{no_final})
    prec =  precedentes{no_final}(i);
    custo_caminho_no_anterior = caminho_custo(no_inicial, prec, custos, precedentes);
    temp_custo = custos(prec, no_final) + custo_caminho_no_anterior{1};
    if(temp_custo > custo)
      custo = temp_custo;
      caminho = [custo_caminho_no_anterior{2} no_final];
    end
    
  end
  
  cam_custo = {};
  cam_custo{1} = custo;
  cam_custo{2} = caminho;
  
  
  return
end