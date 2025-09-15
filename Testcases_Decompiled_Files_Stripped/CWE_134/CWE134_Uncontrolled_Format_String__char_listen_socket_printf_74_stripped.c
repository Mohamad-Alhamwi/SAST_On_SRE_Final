
void FUN_0010533d(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001056b9(void)

{
  return 1;
}




void FUN_00103b52(undefined8 param_1,undefined8 param_2)

{
  FUN_00103cee(param_1,param_2);
  return;
}




void FUN_00104dea(void)

{
  return;
}




undefined8 FUN_0010509c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103458(param_1);
  uVar2 = FUN_0010508a(param_2);
  FUN_001050e8(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00105754(void)

{
  return;
}




void FUN_00105728(void)

{
  return;
}




void FUN_001038e6(long param_1)

{
  FUN_00103b34(param_1 + 0x20);
  return;
}




void FUN_001057b7(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00105194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010508a(param_3);
  puVar3 = (undefined8 *)FUN_0010275c(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_0010575f(void)

{
  return;
}




undefined8 FUN_00105024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00105156(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010508a(param_3);
  FUN_00105194(param_1,param_2,uVar1);
  return;
}




void FUN_00105292(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00105733(void)

{
  return;
}




void FUN_00104988(long param_1)

{
  FUN_00104aae(param_1);
  FUN_00104ace(param_1);
  FUN_00104874(param_1 + 8);
  return;
}




void FUN_0010578b(void)

{
  return;
}




undefined8 FUN_001035b2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_001047b5(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001051e6("Calling good()...");
  FUN_001047a0();
  FUN_001051e6("Finished good()");
  FUN_001051e6("Calling bad()...");
  FUN_00103e13();
  FUN_001051e6("Finished bad()");
  return 0;
}




undefined8 FUN_001032ea(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_00103125(local_38);
    cVar1 = FUN_00102968(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00103864(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010399c(local_38);
    }
  }
  FUN_001032a0(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102772(void)

{
  return;
}




void FUN_00105368(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105a90(void)

{
  return;
}




void FUN_00105749(void)

{
  return;
}




void FUN_001033fe(undefined8 param_1)

{
  FUN_001039c4(param_1);
  return;
}




void FUN_00102691(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102786(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  printf(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010341c(undefined8 param_1)

{
  return param_1;
}




void FUN_001056f1(void)

{
  return;
}




void FUN_00104fa1(undefined8 param_1)

{
  FUN_00104847(param_1);
  return;
}




undefined8 FUN_0010298f(undefined8 param_1)

{
  return param_1;
}




void FUN_00103484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010275c(0x30,param_2);
  uVar1 = FUN_00102cea(param_5);
  uVar2 = FUN_00102cd8(param_4);
  uVar3 = FUN_00102cc6(param_3);
  uVar4 = FUN_00102c1a(param_2);
  uVar5 = FUN_001039da(param_1);
                    /* try { // try from 00103513 to 00103517 has its CatchHandler @ 0010351a */
  FUN_00103a1a(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_00103562(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001032d4(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001035de(local_50);
    cVar2 = FUN_00102968(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001035de(local_50);
      cVar2 = FUN_00102968(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001038a6(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001035c8(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001035c8(local_60);
          local_48[1] = 0;
          FUN_001035fc(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010387a(local_48);
          uVar6 = FUN_001035de(*puVar5);
          cVar2 = FUN_00102968(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010363c(local_60,param_3);
          }
          else {
            lVar3 = FUN_00103864(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001035fc(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001037f0(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001037da(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001037da(local_60);
        uVar6 = FUN_001037da(local_60);
        FUN_001037f0(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103838(local_48);
        uVar6 = FUN_001035de(*puVar5);
        cVar2 = FUN_00102968(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010363c(local_60,param_3);
        }
        else {
          lVar3 = FUN_00103864(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001035fc(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001037f0(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010310a;
  }
  lVar3 = FUN_001035b2(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102e1e:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001035c8(local_60);
    uVar6 = FUN_001035de(*puVar5);
    cVar2 = FUN_00102968(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102e1e;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001035c8(local_60);
    local_48[1] = 0;
    FUN_001035fc(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010363c(local_60,param_3);
  }
LAB_0010310a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_001050e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010275c(0x30,param_2);
  uVar1 = FUN_0010508a(param_3);
  uVar2 = FUN_00102c1a(param_2);
  uVar3 = FUN_001039da(param_1);
  FUN_00105156(uVar3,uVar2,uVar1);
  return;
}




void FUN_001029a2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c86(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102583) */
/* WARNING: Removing unreachable block (ram,0x0010258f) */

void FUN_00102570(void)

{
  return;
}




void FUN_00104bf4(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104cf6(local_18,param_1);
  FUN_00104d14(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001037f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103a8a(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103a8a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102b6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001032d4(param_1);
  uVar2 = FUN_001032be(param_1);
  FUN_001032ea(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_001049c4(undefined8 param_1)

{
  FUN_00104ade(param_1);
  return;
}




undefined8 FUN_001039da(undefined8 param_1)

{
  return param_1;
}




void FUN_00104cf6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103bae(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103d2a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_001053c2(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001035de(undefined8 param_1)

{
  FUN_00103125(param_1);
  return;
}




void FUN_00104cb8(undefined8 param_1,undefined8 param_2)

{
  FUN_00104dea(param_1,param_2);
  return;
}




void FUN_00105443(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103bfe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102cc6(param_3);
  uVar1 = FUN_00102cd8(param_4);
  FUN_001029a2(local_38,uVar1);
  FUN_00102cea(param_5);
  uVar1 = FUN_0010275c(0x10,param_2);
                    /* try { // try from 00103c86 to 00103c8a has its CatchHandler @ 00103c8d */
  FUN_00103d42(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001032d4(long param_1)

{
  return param_1 + 8;
}




void FUN_00103962(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039da(param_1);
  FUN_00103b7c(uVar1,param_2,1);
  return;
}




void FUN_00105415(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001048de(undefined8 param_1)

{
  FUN_001049c4(param_1);
  return;
}




undefined8 FUN_00102cea(undefined8 param_1)

{
  return param_1;
}




void FUN_001038a6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103a8a(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00105775(void)

{
  return;
}




void FUN_001047a0(void)

{
  FUN_001041e5();
  FUN_001043ce();
  return;
}




void FUN_00105312(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_0010503a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001033c6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c3c(param_2);
  FUN_0010342e(param_1,uVar1);
  return;
}




void FUN_001053ea(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102c3c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00103458(param_1);
  uVar2 = FUN_00102cea(param_4);
  uVar3 = FUN_00102cd8(param_3);
  uVar4 = FUN_00102cc6(param_2);
  FUN_00103484(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103d94(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103dd7(param_2);
  puVar2 = (undefined4 *)FUN_0010341c(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00102a04(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103aec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103cc9(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103a8a(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102cd8(undefined8 param_1)

{
  return param_1;
}




bool FUN_001058bb(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




undefined8 FUN_0010275c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001028fa(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00105796(void)

{
  return;
}




void FUN_00104ce2(void)

{
  return;
}




undefined8 FUN_001029cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c3c(param_2);
  FUN_00102c4e(param_1,uVar1);
  return param_1;
}




void FUN_001057ac(void)

{
  return;
}




undefined8 FUN_00103d2a(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_00104d14(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001032d4(param_1);
  uVar2 = FUN_00104dfe(param_2);
  uVar1 = FUN_00104e14(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001037da(param_1);
  uVar2 = FUN_00104f83(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001035c8(param_1);
  uVar2 = FUN_00104fa1(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_0010573e(void)

{
  return;
}




void FUN_001026f9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102786(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  puts(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c4e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c3c(param_2);
  FUN_001033c6(param_1,uVar1);
  return;
}




int FUN_001056d7(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00105266(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00104c67(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104dbc(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001059f0(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00105a20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_001048fe(undefined8 param_1)

{
  FUN_00104988(param_1);
  return;
}




void FUN_001039ec(undefined8 param_1,undefined8 param_2)

{
  FUN_00103bae(param_1,param_2,0);
  return;
}




void FUN_00104ace(void)

{
  return;
}




void FUN_001028b2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b6c(param_1,param_2);
  return;
}




undefined8 FUN_00103cc9(undefined8 param_1)

{
  return param_1;
}




void FUN_001052e7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001059d1(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001039c4(undefined8 *param_1)

{
  return *param_1;
}




undefined4 FUN_00102968(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined4 * FUN_00104fc0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001038e6(param_2);
  puVar2 = (undefined4 *)FUN_00105050(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00105780(void)

{
  return;
}




undefined8 FUN_0010363c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_001032be(param_1);
  local_50 = FUN_001032d4(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00103125(local_58);
    local_59 = FUN_00102968(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00103864(local_58);
    }
    else {
      local_58 = FUN_0010399c(local_58);
    }
  }
  FUN_001032a0(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103a9c(param_1);
    cVar1 = FUN_001028fa(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103aec(local_38,&local_58,&local_50);
      goto LAB_001037be;
    }
    FUN_00103838(&local_48);
  }
  uVar2 = FUN_001035de(local_48);
  cVar1 = FUN_00102968(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001038a6(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103aec(local_38,&local_58,&local_50);
  }
LAB_001037be:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00102cc6(undefined8 param_1)

{
  return param_1;
}




void FUN_0010520c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001057a1(void)

{
  return;
}




void FUN_00102c1a(long param_1)

{
  FUN_001033a8(param_1 + 0x20);
  return;
}




void FUN_001032a0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103a1a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102cea(param_5);
  uVar2 = FUN_00102cd8(param_4);
  uVar3 = FUN_00102cc6(param_3);
  FUN_00103bfe(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00104aae(undefined8 param_1)

{
  FUN_00104c58(param_1);
  return;
}




undefined4 FUN_00102920(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102c0c(param_1);
  return unaff_EBX;
}




void FUN_0010523e(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010571d(void)

{
  return;
}




void FUN_00102629(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102786(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  printf(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d02(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




long FUN_00102786(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_001028b2(param_1,param_2);
  local_28 = FUN_001028dc(param_1);
  cVar2 = FUN_001028fa(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00102920(param_1);
    uVar3 = FUN_00102946(&local_38);
    cVar2 = FUN_00102968(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00102826;
    }
  }
  bVar1 = true;
LAB_00102826:
  if (bVar1) {
    uVar3 = FUN_0010298f(param_2);
    FUN_001029cc(local_30,uVar3);
    FUN_00102a04(&local_28,&local_38);
    local_38 = FUN_00102a26(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_00102946(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_00103864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001041e5(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010491e(local_e8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_b8[0] = 0;
                    /* try { // try from 001042c5 to 00104346 has its CatchHandler @ 0010439e */
  plVar1 = (long *)FUN_00102786(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00102786(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00102786(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_0010495e(local_b8,local_e8);
                    /* try { // try from 00104351 to 00104355 has its CatchHandler @ 00104386 */
  FUN_00102691(local_b8);
  FUN_0010493e(local_b8);
  FUN_0010493e(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e90)();
  return;
}




undefined8 FUN_00103cdc(undefined8 param_1)

{
  return param_1;
}




void FUN_00103458(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039da(param_1);
  FUN_001039ec(uVar1,1);
  return;
}




void FUN_00102c0c(void)

{
  return;
}




void FUN_0010491e(undefined8 param_1)

{
  FUN_001048fe(param_1);
  return;
}




void FUN_0010489e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00103a8a(undefined8 param_1)

{
  return param_1;
}




void FUN_00105050(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010508a(param_2);
  FUN_0010509c(uVar1,uVar2);
  return;
}




void FUN_00103b34(undefined8 param_1)

{
  FUN_00103cdc(param_1);
  return;
}




void FUN_001052bc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001056fc(void)

{
  return;
}




void FUN_00103cee(void)

{
  return;
}




long FUN_00104e14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00104fc0(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00105024(param_2);
                    /* try { // try from 00104e83 to 00104f15 has its CatchHandler @ 00104f41 */
    uVar2 = FUN_00104e14(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010503a(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00104fc0(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00105024(local_38);
      uVar2 = FUN_00104e14(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010503a(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_00104bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001028dc(undefined8 param_1)

{
  FUN_00102bbc(param_1);
  return;
}




undefined8
FUN_00102a26(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102cea(param_5);
  uVar2 = FUN_00102cd8(param_4);
  uVar3 = FUN_00102cc6(param_3);
  local_40 = FUN_00102cfc(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102aa2 to 00102ae5 has its CatchHandler @ 00102b23 */
  uVar1 = FUN_00103125(local_40);
  local_38 = FUN_00102d7c(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00103262(param_1,local_40);
    FUN_001032a0(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00103178(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_0010399c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103562(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032a0(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104c58(void)

{
  return;
}




long FUN_001035c8(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_00105939(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00103dd7(undefined8 param_1)

{
  FUN_00103df5(param_1);
  return;
}




void FUN_001049e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001032be(param_1);
  FUN_00104aee(param_1,uVar1);
  FUN_001048de(param_1);
  return;
}




undefined8 * FUN_00103838(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00104dbc(undefined8 param_1,undefined8 param_2)

{
  FUN_00104cb8(param_1,param_2);
  return param_1;
}




void FUN_00104874(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010489e(param_1);
  return;
}




undefined8
FUN_00103178(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_001032d4(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001035de(param_3);
      uVar5 = FUN_00103125(param_4);
      cVar1 = FUN_00102968(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001031fc;
      }
    }
  }
  bVar2 = true;
LAB_001031fc:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001032a0(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102946(undefined8 *param_1)

{
  FUN_00102c1a(*param_1);
  return;
}




void FUN_00104aee(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00103864(local_28);
    FUN_00104aee(param_1,uVar1);
    lVar2 = FUN_0010399c(local_28);
    FUN_00103262(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_0010391e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c1a(param_2);
  uVar2 = FUN_001039da(param_1);
  FUN_00103b52(uVar2,uVar1);
  return;
}




void FUN_0010342e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c3c(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_001033a8(undefined8 param_1)

{
  FUN_001039b2(param_1);
  return;
}




undefined8 FUN_00104dfe(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001039b2(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_0010387a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103262(undefined8 param_1,undefined8 param_2)

{
  FUN_0010391e(param_1,param_2);
  FUN_00103962(param_1,param_2);
  return;
}




void FUN_001051e6(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001059b2(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010493e(undefined8 param_1)

{
  FUN_001049e4(param_1);
  return;
}




void FUN_00105476(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00104ade(void)

{
  return;
}




void FUN_00105712(void)

{
  return;
}




void FUN_00102c86(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001033fe(param_2);
  uVar1 = FUN_0010341c(uVar1);
  FUN_0010342e(param_1,uVar1);
  return;
}




long FUN_00104bde(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00104f83(undefined8 param_1)

{
  FUN_0010481a(param_1);
  return;
}




long FUN_001037da(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_00105916(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_001056c8(void)

{
  return 0;
}




void FUN_0010495e(undefined8 param_1,undefined8 param_2)

{
  FUN_00104a22(param_1,param_2);
  return;
}




void FUN_001043ce(void)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  int local_11c;
  undefined local_f8 [48];
  undefined4 local_c8 [12];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010491e(local_f8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_11c = -1;
  sVar2 = strlen(local_88);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 00104558 to 00104718 has its CatchHandler @ 00104770 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_11c = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_11c != -1)) {
      sVar3 = recv(local_11c,local_88 + sVar2,99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_88[(long)iVar1 + sVar2] = '\0';
        pcVar4 = strchr(local_88,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr(local_88,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_11c != -1) {
    close(local_11c);
  }
  local_c8[0] = 0;
  puVar5 = (undefined8 *)FUN_00102786(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00102786(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00102786(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_0010495e(local_c8,local_f8);
                    /* try { // try from 00104723 to 00104727 has its CatchHandler @ 00104758 */
  FUN_001026f9(local_c8);
  FUN_0010493e(local_c8);
  FUN_0010493e(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103d42(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103d94(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001032be(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001035fc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103a8a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103e13(void)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  int local_11c;
  undefined local_f8 [48];
  undefined4 local_c8 [12];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010491e(local_f8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_11c = -1;
  sVar2 = strlen(local_88);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 00103f9d to 0010415d has its CatchHandler @ 001041b5 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_11c = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_11c != -1)) {
      sVar3 = recv(local_11c,local_88 + sVar2,99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_88[(long)iVar1 + sVar2] = '\0';
        pcVar4 = strchr(local_88,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr(local_88,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_11c != -1) {
    close(local_11c);
  }
  local_c8[0] = 0;
  puVar5 = (undefined8 *)FUN_00102786(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00102786(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00102786(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_0010495e(local_c8,local_f8);
                    /* try { // try from 00104168 to 0010416c has its CatchHandler @ 0010419d */
  FUN_00102629(local_c8);
  FUN_0010493e(local_c8);
  FUN_0010493e(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00103908(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_0010508a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001057ee(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001057b7,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void _FINI_0(void)

{
  if (DAT_0010a020 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102570();
    DAT_0010a020 = 1;
    return;
  }
  return;
}




void FUN_00105707(void)

{
  return;
}




void FUN_0010576a(void)

{
  return;
}




void FUN_00103b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103d02(param_1,param_2,param_3);
  return;
}




void FUN_00104a22(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00104b58(param_1,param_2);
  lVar1 = FUN_00104bc8(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00104bde(param_1);
                    /* try { // try from 00104a7d to 00104a81 has its CatchHandler @ 00104a87 */
    uVar3 = FUN_00104bf4(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103df5(undefined8 param_1)

{
  FUN_001033fe(param_1);
  return;
}




long FUN_00104847(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103125(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001038e6(param_1);
  FUN_00103908(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102bbc(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032a0(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_001055da(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010609c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104b58(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104c67(param_1,param_2);
  FUN_00104ce2(param_1,param_2);
  FUN_00104874(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010481a(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




/* WARNING: Removing unreachable block (ram,0x001025c4) */
/* WARNING: Removing unreachable block (ram,0x001025d0) */

void FUN_001025a0(void)

{
  return;
}




undefined8 FUN_00103a9c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032a0(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_001054d6(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00106094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



