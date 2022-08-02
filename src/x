  for (edge = 0; edge < 32; edge++) {
    safety = edge;
    tropism = 0;
    while (tropism <= edge) {
      if (tropism < 16 && safety < 16)
        king_safety[safety][tropism] =
            (safety * safety_vector[Min(edge, 15)] +
            tropism * tropism_vector[Min(edge, 15)]) / Max(safety + tropism, 1);
      safety--;
      tropism++;
    }
  }

