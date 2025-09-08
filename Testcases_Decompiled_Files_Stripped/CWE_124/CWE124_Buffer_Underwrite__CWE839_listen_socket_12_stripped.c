
void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101200(PTR_LOOP_00105008);
    }
    FUN_00101410();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_001021a9(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00101728(void)

{
  uint16_t uVar1;
  int iVar2;
  int iVar3;
  ssize_t sVar4;
  long in_FS_OFFSET;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = -1;
  iVar2 = FUN_00102163();
  if (iVar2 == 0) {
    local_64 = -1;
    iVar2 = socket(2,1,6);
    if (iVar2 != -1) {
      memset(&local_48,0,0x10);
      local_48.sa_family = 2;
      local_48._0_8_ = local_48._0_8_ & 0xffffffff;
      uVar1 = htons(0x6987);
      local_48.sa_data._0_2_ = uVar1;
      iVar3 = bind(iVar2,&local_48,0x10);
      if (((iVar3 != -1) && (iVar3 = listen(iVar2,5), iVar3 != -1)) &&
         (local_64 = accept(iVar2,(sockaddr *)0x0,(socklen_t *)0x0), local_64 != -1)) {
        sVar4 = recv(local_64,local_1e,0xd,0);
        iVar3 = (int)sVar4;
        if ((iVar3 != -1) && (iVar3 != 0)) {
          local_1e[iVar3] = '\0';
          local_6c = atoi(local_1e);
        }
      }
    }
    if (iVar2 != -1) {
      close(iVar2);
    }
    if (local_64 != -1) {
      close(local_64);
    }
  }
  else {
    local_68 = -1;
    iVar2 = socket(2,1,6);
    if (iVar2 != -1) {
      memset(&local_48,0,0x10);
      local_48.sa_family = 2;
      local_48._0_8_ = local_48._0_8_ & 0xffffffff;
      uVar1 = htons(0x6987);
      local_48.sa_data._0_2_ = uVar1;
      iVar3 = bind(iVar2,&local_48,0x10);
      if (((iVar3 != -1) && (iVar3 = listen(iVar2,5), iVar3 != -1)) &&
         (local_68 = accept(iVar2,(sockaddr *)0x0,(socklen_t *)0x0), local_68 != -1)) {
        sVar4 = recv(local_68,local_1e,0xd,0);
        iVar3 = (int)sVar4;
        if ((iVar3 != -1) && (iVar3 != 0)) {
          local_1e[iVar3] = '\0';
          local_6c = atoi(local_1e);
        }
      }
    }
    if (iVar2 != -1) {
      close(iVar2);
    }
    if (local_68 != -1) {
      close(local_68);
    }
  }
  iVar2 = FUN_00102163();
  if (iVar2 == 0) {
    local_48.sa_family = 0;
    local_48.sa_data[0] = '\0';
    local_48.sa_data[1] = '\0';
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data[6] = '\0';
    local_48.sa_data[7] = '\0';
    local_48.sa_data[8] = '\0';
    local_48.sa_data[9] = '\0';
    local_48.sa_data[10] = '\0';
    local_48.sa_data[0xb] = '\0';
    local_48.sa_data[0xc] = '\0';
    local_48.sa_data[0xd] = '\0';
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((local_6c < 0) || (9 < local_6c)) {
      FUN_00101c72("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)(local_48.sa_data + (long)local_6c * 4 + -2) = 1;
      for (local_5c = 0; local_5c < 10; local_5c = local_5c + 1) {
        FUN_00101cca(*(undefined4 *)(local_48.sa_data + (long)local_5c * 4 + -2));
      }
    }
  }
  else {
    local_48.sa_family = 0;
    local_48.sa_data[0] = '\0';
    local_48.sa_data[1] = '\0';
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data[6] = '\0';
    local_48.sa_data[7] = '\0';
    local_48.sa_data[8] = '\0';
    local_48.sa_data[9] = '\0';
    local_48.sa_data[10] = '\0';
    local_48.sa_data[0xb] = '\0';
    local_48.sa_data[0xc] = '\0';
    local_48.sa_data[0xd] = '\0';
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((local_6c < 0) || (9 < local_6c)) {
      FUN_00101c72("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)(local_48.sa_data + (long)local_6c * 4 + -2) = 1;
      for (local_60 = 0; local_60 < 10; local_60 = local_60 + 1) {
        FUN_00101cca(*(undefined4 *)(local_48.sa_data + (long)local_60 * 4 + -2));
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001021ca(void)

{
  return;
}




void FUN_0010243e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102217(void)

{
  return;
}




void FUN_00101d9e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_0010227a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102243,local_18);
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




void FUN_00101f02(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001021f6(void)

{
  return;
}




ulong FUN_00102066(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102243(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101c72(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101c98(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101be4(void)

{
  FUN_00101728();
  FUN_00101aa5();
  return;
}




void FUN_001021d5(void)

{
  return;
}




void FUN_00101e76(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001021eb(void)

{
  return;
}




void FUN_0010245d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee8)();
  return;
}




void FUN_001014c9(void)

{
  uint16_t uVar1;
  int iVar2;
  int iVar3;
  ssize_t sVar4;
  long in_FS_OFFSET;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = -1;
  iVar2 = FUN_00102163();
  if (iVar2 == 0) {
    local_60 = 7;
  }
  else {
    local_5c = -1;
    iVar2 = socket(2,1,6);
    if (iVar2 != -1) {
      memset(&local_48,0,0x10);
      local_48.sa_family = 2;
      local_48._0_8_ = local_48._0_8_ & 0xffffffff;
      uVar1 = htons(0x6987);
      local_48.sa_data._0_2_ = uVar1;
      iVar3 = bind(iVar2,&local_48,0x10);
      if (((iVar3 != -1) && (iVar3 = listen(iVar2,5), iVar3 != -1)) &&
         (local_5c = accept(iVar2,(sockaddr *)0x0,(socklen_t *)0x0), local_5c != -1)) {
        sVar4 = recv(local_5c,local_1e,0xd,0);
        iVar3 = (int)sVar4;
        if ((iVar3 != -1) && (iVar3 != 0)) {
          local_1e[iVar3] = '\0';
          local_60 = atoi(local_1e);
        }
      }
    }
    if (iVar2 != -1) {
      close(iVar2);
    }
    if (local_5c != -1) {
      close(local_5c);
    }
  }
  iVar2 = FUN_00102163();
  if (iVar2 == 0) {
    local_48.sa_family = 0;
    local_48.sa_data[0] = '\0';
    local_48.sa_data[1] = '\0';
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data[6] = '\0';
    local_48.sa_data[7] = '\0';
    local_48.sa_data[8] = '\0';
    local_48.sa_data[9] = '\0';
    local_48.sa_data[10] = '\0';
    local_48.sa_data[0xb] = '\0';
    local_48.sa_data[0xc] = '\0';
    local_48.sa_data[0xd] = '\0';
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((local_60 < 0) || (9 < local_60)) {
      FUN_00101c72("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)(local_48.sa_data + (long)local_60 * 4 + -2) = 1;
      for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
        FUN_00101cca(*(undefined4 *)(local_48.sa_data + (long)local_54 * 4 + -2));
      }
    }
  }
  else {
    local_48.sa_family = 0;
    local_48.sa_data[0] = '\0';
    local_48.sa_data[1] = '\0';
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data[6] = '\0';
    local_48.sa_data[7] = '\0';
    local_48.sa_data[8] = '\0';
    local_48.sa_data[9] = '\0';
    local_48.sa_data[10] = '\0';
    local_48.sa_data[0xb] = '\0';
    local_48.sa_data[0xc] = '\0';
    local_48.sa_data[0xd] = '\0';
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (local_60 < 10) {
      *(undefined4 *)(local_48.sa_data + (long)local_60 * 4 + -2) = 1;
      for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
        FUN_00101cca(*(undefined4 *)(local_48.sa_data + (long)local_58 * 4 + -2));
      }
    }
    else {
      FUN_00101c72("ERROR: Array index is negative.");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010222d(void)

{
  return;
}




bool FUN_00102347(pthread_t *param_1)

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




undefined8 FUN_001023c5(undefined8 *param_1)

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




undefined8 FUN_00102145(void)

{
  return 1;
}




void FUN_00101dc9(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cf2(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101200(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_001021e0(void)

{
  return;
}




int FUN_00102163(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101c03(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101c72("Calling good()...");
  FUN_00101be4();
  FUN_00101c72("Finished good()");
  FUN_00101c72("Calling bad()...");
  FUN_001014c9();
  FUN_00101c72("Finished bad()");
  return 0;
}




void FUN_00102193(void)

{
  return;
}




void FUN_00102201(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101b53) */
/* WARNING: Removing unreachable block (ram,0x00101bc1) */

void FUN_00101aa5(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102163();
  iVar1 = FUN_00102163();
  if (iVar1 == 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
    local_20._4_4_ = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
      FUN_00101cca(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  else {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
    local_20._4_4_ = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00101cca(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010217d(void)

{
  return;
}




void FUN_001021b4(void)

{
  return;
}




void FUN_00101df4(undefined4 param_1)

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




void FUN_00101ea1(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102222(void)

{
  return;
}




void FUN_00102520(void)

{
  return;
}




void FUN_00101d73(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001021bf(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_00101ecf(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102154(void)

{
  return 0;
}




void FUN_0010219e(void)

{
  return;
}




void FUN_00101d48(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001023a2(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001024b0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010247c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102238(void)

{
  return;
}




void FUN_0010220c(void)

{
  return;
}




void FUN_00101e4e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_00101f62(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030d8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102188(void)

{
  return;
}




void FUN_00101d1e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101cca(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}



